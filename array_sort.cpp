#include <iostream>
using namespace std;

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int n) {
    // Outer loop for each pass
    for (int i = 0; i < n-1; i++) {
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n-1-i; j++) {
            // Swap if elements are in wrong order
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n; // Read the number of elements

    int arr[n]; // Declare array of size n

    cout << "Enter " << n << " numbers: ";
    // Read n elements into the array
    for (int i = 0; i < n; i++) cin >> arr[i];

    bubbleSort(arr, n); // Sort the array

    cout << "Sorted array: ";
    // Print the sorted array
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0; // Indicate successful execution
}
