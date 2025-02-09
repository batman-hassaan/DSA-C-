#include <iostream>
#include <algorithm>
using namespace std;

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Assume the first element of the unsorted part is the minimum
        int minIndex = i;

        // Find the minimum element in the unsorted portion
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
        // Swap the found minimum element with the first element of the unsorted part
        // if (minIndex != i) {
        //     int temp = arr[minIndex];
        //     arr[minIndex] = arr[i];
        //     arr[i] = temp;
        // }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Driver code
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
