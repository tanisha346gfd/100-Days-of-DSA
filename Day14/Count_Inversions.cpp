class Solution {
public:
    vector<int> temp;
    int ct = 0;

    void merge(vector<int> &arr, int st, int end, int mid) {
        int first = st;
        int last = mid + 1;
        temp.clear();

        while (first <= mid && last <= end) {
            if (arr[first] <= arr[last]) {
                temp.push_back(arr[first]);
                first++;
            } else {
                // Inversion found: all elements from first to mid are greater than arr[last]
                ct += (mid - first + 1);
                temp.push_back(arr[last]);
                last++;
            }
        }

        while (first <= mid) {
            temp.push_back(arr[first]);
            first++;
        }

        while (last <= end) {
            temp.push_back(arr[last]);
            last++;
        }

        for (int i = st; i <= end; i++) {
            arr[i] = temp[i - st];
        }
    }

    void mergesort(vector<int> &arr, int st, int end) {
        if (st >= end) {
            return;
        }

        int mid = st + (end - st) / 2;

        mergesort(arr, st, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, st, end, mid);
    }

    int inversionCount(vector<int> &arr) {
        mergesort(arr, 0, arr.size() - 1);
        return ct;
    }
};
