#include <bits/stdc++.h>
using namespace std;

// class TrieNode
// {
// public:
//     TrieNode *children[26]; // a to z
//     bool isEnd;
//     TrieNode()
//     {
//         isEnd = false;
//         for (int i = 0; i < 26; i++)
//             children[i] = NULL;
//     }
// };
// class Trie
// {
// private:
//     TrieNode *root;
// public:
//     Trie()
//     {
//         root = new TrieNode();
//     }
//     // O(Leng(name)) => O(N)
//     void insert(string name)
//     {
//         TrieNode *curr = root;
//         for (char c : name)
//         {
//             if (curr->children[c - 'a'] == NULL)
//             {
//                 // there is no char c in the trie at this pos, so insert
//                 curr->children[c - 'a'] = new TrieNode();
//             }
//             // move the curr pointer to the child
//             curr = curr->children[c - 'a'];
//         }
//         curr->isEnd = true;
//         return;
//     }
//     bool search(string name)
//     {
//         TrieNode *curr = root;
//         for (char c : name)
//         {
//             if (curr->children[c - 'a'] == NULL)
//             {
//                 // the char is not present
//                 return false;
//             }
//             curr = curr->children[c - 'a'];
//         }
//         return curr->isEnd;
//     }
//     bool prefixSearch(string name)
//     {
//         TrieNode *curr = root;
//         for (char c : name)
//         {
//             if (curr->children[c - 'a'] == NULL)
//             {
//                 // the char is not present
//                 return false;
//             }
//             curr = curr->children[c - 'a'];
//         }
//         return true;
//     }
// };

class TrieNode
{
public:
    TrieNode *children[26]; // a to z
    int freq;
    int count_end;
    TrieNode()
    {
        freq = 0;
        count_end = 0;
        for (int i = 0; i < 26; i++)
            children[i] = NULL;
    }
};

class Trie
{
private:
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode();
    }

    void insert(string name)
    {

        TrieNode *curr = root;
        for (char c : name)
        {
            if (curr->children[c - 'a'] == NULL)
            {
                curr->children[c - 'a'] = new TrieNode();
            }
            curr = curr->children[c - 'a'];
            curr->freq++; // new
        }
        curr->count_end++;
    }

    bool search(string name)
    {
        TrieNode *curr = root;
        for (char c : name)
        {
            if (curr->children[c - 'a'] == NULL)
            {
                return false;
            }
            if (curr->children[c - 'a']->freq == 0)
            {
                return false;
            }
            curr = curr->children[c - 'a'];
        }

        if (curr->count_end > 0)
            return true;
        return false;
    }

    bool prefixSearch(string name)
    {
        TrieNode *curr = root;
        for (char c : name)
        {
            if (curr->children[c - 'a'] == NULL)
            {
                return false;
            }
            if (curr->children[c - 'a']->freq <= 0)
            {
                return false;
            }
            curr = curr->children[c - 'a'];
        }

        return true;
    }

    void deletename(string name)
    {
        if (search(name) == false)
        { // name is not part of my dict/trie, so not deleting
            return;
        }

        TrieNode *curr = root;
        for (char c : name)
        {
            if (curr->children[c - 'a'] == NULL)
            {
                return;
            }
            if (curr->children[c - 'a']->freq <= 0)
            {
                return;
            }
            curr->children[c - 'a']->freq--;

            if (curr->children[c - 'a']->freq <= 0)
            {
                // this means, that
                delete (curr->children[c - 'a']);
                curr->children[c - 'a'] = NULL;
                return;
            }

            curr = curr->children[c - 'a'];
        }

        curr->count_end--;
        return;
    }
};

int32_t main()
{

    Trie *t = new Trie();

    t->insert("raghav");
    t->insert("raghavandera");
    t->insert("sahil");
    t->insert("naman");
    t->insert("raman");

    cout << t->search("raghav") << endl;
    cout << t->search("sahil") << endl;
    cout << t->search("rag") << endl;
    cout << t->prefixSearch("rag") << endl;

    t->deletename("raghavandera");
    t->deletename("raghav");
    cout << endl;

    cout << t->search("raghav") << endl;
    cout << t->search("sahil") << endl;
    cout << t->search("rag") << endl;
    cout << t->prefixSearch("rag") << endl;
}