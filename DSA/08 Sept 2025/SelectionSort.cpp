#include <iostream>
using namespace std;

// -------- Selection Sort --------
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        // Find the index of the smallest element in remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum with current element
        swap(arr[i], arr[minIndex]);
    }
}

// -------- Bubble Sort --------
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; // To optimize if already sorted
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; // Stop if no swapping done
    }
}

// --------Print array ---------
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr1[] = {29, 10, 14, 37, 13};
    int arr2[] = {5, 1, 4, 2, 8};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    cout << "Original Array (Selection Sort): ";
    printArray(arr1, n1);
    selectionSort(arr1, n1);
    cout << "Sorted Array (Selection Sort): ";
    printArray(arr1, n1);

    cout << "\nOriginal Array (Bubble Sort): ";
    printArray(arr2, n2);
    bubbleSort(arr2, n2);
    cout << "Sorted Array (Bubble Sort): ";
    printArray(arr2, n2);

    return 0;
}
