#include <bits/stdc++.h>
using namespace std;

class segTree
{

private:
    vector<int> segTreeArr;
    vector<int> lazySegTree; // to store pending operations/update

public:
    segTree(int n)
    {
        segTreeArr.resize(4 * n);
        lazySegTree.resize(4 * n);
        for (int i = 0; i < 4 * n; i++)
        {
            segTreeArr[i] = 0;
            lazySegTree[i] = 0;
        }
    }

    // TC: O(4*N)
    //  low and hi is the range of SegTree Node at index idx
    void buildSegTree(vector<int> &nums, int idx, int low, int hi)
    {
        if (low > hi)
            return;
        if (low == hi)
        {
            segTreeArr[idx] = nums[low];
            return;
        }

        int mid = (low + hi) / 2;
        buildSegTree(nums, 2 * idx + 1, low, mid);
        buildSegTree(nums, 2 * idx + 2, mid + 1, hi);

        segTreeArr[idx] = segTreeArr[2 * idx + 1] + segTreeArr[2 * idx + 2];
        return;
    }
    // TC O(4*n)
    void printSegTreeArr(int n)
    {
        cout << "seg tree arr ";
        for (int i = 0; i < 4 * n; i++)
        {
            cout << segTreeArr[i] << " ";
        }
        cout << endl;

        cout << "lazy arr ";
        for (int i = 0; i < 4 * n; i++)
        {
            cout << lazySegTree[i] << " ";
        }
        cout << endl;
    }

    // logN
    void rangeUpdate(int idx, int low, int hi, int L, int R, int diff)
    {
        // if there is a pending update for this node, i= should finish that

        if (lazySegTree[idx] != 0)
        {
            // complete the update for this node
            segTreeArr[idx] += (lazySegTree[idx] * (hi - low + 1));

            if (low != hi) // if there are child nodes
            {
                // mark pending for child node
                lazySegTree[2 * idx + 1] += lazySegTree[idx];
                lazySegTree[2 * idx + 1] += lazySegTree[idx];
            }
            lazySegTree[idx] = 0; // as we have completed the update for this node, remove the pending update
        }

        // no overlap
        // you have low - hi , update( L to R)
        if (hi < L || low > R)
            return;

        // full overlap
        // l , low , hi , r // you have 4 to 5 , you want to update (1 to 5)
        if (L <= low && hi <= R)
        {
            // complete the operation for this node
            segTreeArr[idx] += (diff * (hi - low + 1));

            if (low != hi)
            {
                // mark pending update for child nodes
                lazySegTree[2 * idx + 1] += diff;
                lazySegTree[2 * idx + 2] += diff;
            }
            return;
        }

        int mid = (low + hi) / 2;

        rangeUpdate(2 * idx + 1, low, mid, L, R, diff);
        rangeUpdate(2 * idx + 2, mid + 1, hi, L, R, diff);
        segTreeArr[idx] = segTreeArr[2 * idx + 1] + segTreeArr[2 * idx + 2];
    }

    // logN
    void pointUpdate(int idx, int low, int hi, int X, int diff)
    {
        rangeUpdate(idx, low, hi, X, X, diff);
    }
    // Log N
    int query(int idx, int low, int hi, int L, int R)
    {
        // if there is a pending update for this node, i= should finish that
        if (lazySegTree[idx] != 0)
        {
            // complete the update for this node
            segTreeArr[idx] += (lazySegTree[idx] * (hi - low + 1));

            if (low != hi) // if there are child nodes
            {
                // mark pending for child node
                lazySegTree[2 * idx + 1] += lazySegTree[idx];
                lazySegTree[2 * idx + 1] += lazySegTree[idx];
            }
            lazySegTree[idx] = 0; // as we have completed the update for this node, remove the pending update
        }

        if (low > hi)
            return 0;

        // no overlap
        // low hi , l r have (0-2 ) need (5,7)
        // l r , low hi have(6 - 7) need (3-4)
        if (hi < L || R < low)
            return 0;

        // full overlap
        // l , low , hi , r // you have 4 to 5 , you want to update (1 to 5)
        if (L <= low && hi <= R)
        {
            return segTreeArr[idx];
        }

        // partial overlap
        // need( L R) have(low hi)
        // low <= L <=R <=Hi  need (1 3 ) have (0, 7)
        //  low<=L <=hi <=R   need (4 7) have (1,5)
        // L<=low <= R <= hi need(1 3 ) have(2,5)
        int mid = (low + hi) / 2;

        return query(2 * idx + 1, low, mid, L, R) +
               query(2 * idx + 2, mid + 1, hi, L, R);
    }
};

int32_t main()
{

    vector<int> nums = {3, 2, 1, 5, 4};
    int n = nums.size();
    segTree seg(n);

    seg.buildSegTree(nums, 0, 0, n - 1);
    seg.printSegTreeArr(n);

    seg.rangeUpdate(0, 0, n - 1, 2, 4, 2);
    seg.printSegTreeArr(n);

    // seg.rangeUpdate(0, 0, n - 1, 0, 0, 100);
    seg.pointUpdate(0, 0, n - 1, 0, 100);
    seg.printSegTreeArr(n);

    cout << endl;
    cout << " quer 1 to 4 " << seg.query(0, 0, n - 1, 1, 4) << endl;
    seg.printSegTreeArr(n);
    cout << endl;

    cout << " quer 1 to 3 " << seg.query(0, 0, n - 1, 1, 3) << endl;
    seg.printSegTreeArr(n);
}