#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int>& arr, int start, int end) {
    if (start >= end) return;

    int i = start, j = end;
    int pivot = arr[start];

    while (i < j) {
        while (i <= end && arr[i] <= pivot) i++;
        while (j > start && arr[j] > pivot) j--;

        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[start], arr[j]);

    quickSort(arr, start, j - 1);
    quickSort(arr, j + 1, end);
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> arr(n);
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, arr.size() - 1);

    for (int val : arr) {
        cout << val << " ";
    }
    return 0;
}
