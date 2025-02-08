#include <iostream>
using namespace std;

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    bool swap = false;
    for(int i  = 0 ; i< n ; i++){
        for (int j = 0; j < n-i-1; j++){
          if(arr[j] > arr[j+1]){
            // Swap if elements are in the wrong order
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            swap =true;
          }
        }
        // If no elements were swapped in this pass, the array is sorted
        if(!swap) break;
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
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
