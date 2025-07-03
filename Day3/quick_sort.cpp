// Day 3: Quick Sort
// Problem: Implement Quick Sort using the last element as pivot
// Language: C++

class Solution {
  public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int>& arr, int low, int high) {
        if(low >= high) return;

        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }

  public:
    // Partition using last element as pivot (Lomuto partition scheme)
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high];
        int j = low - 1;

        for (int i = low; i < high; i++) {
            if (arr[i] < pivot) {
                j++;
                swap(arr[i], arr[j]);
            }
        }

        j++;
        swap(arr[j], arr[high]);
        return j;
    }
};


