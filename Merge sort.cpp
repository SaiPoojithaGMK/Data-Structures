#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    
    // Use vectors instead of regular arrays
    vector<int> left(n1), right(n2);
    
    // Copy data into left[] and right[]
    for (int i = 0; i < n1; i++) {
        left[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        right[j] = arr[m + 1 + j];
    }

    int k = l, i = 0, j = 0;
    
    // Merge the two halves into arr[]
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of left[], if any
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy remaining elements of right[], if any
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);      // Sort the left half
    mergeSort(arr, m + 1, r);  // Sort the right half
    merge(arr, l, m, r);       // Merge the two halves
}

int main() {
    int n;
    cout<<"enter number";
    cin >> n;
    
    // Declare the array with size n
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array using mergeSort
    mergeSort(arr, 0, n - 1);

    // Output the sorted array with space between elements
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Print with space between numbers
    }
    cout << endl;  // New line at the end for better formatting

    return 0;
}
