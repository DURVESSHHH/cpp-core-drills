#include <iostream> // Include the input/output stream library
using namespace std; // Use the standard namespace

int sum(int arr[], int size) { // Function to calculate the sum of array elements
    int total = 0; // Initialize total to 0
    for(int i = 0; i < size; i++) { // Loop through each element in the array
        total += arr[i]; // Add the current element to total
    }
    return total; // Return the total sum
}

float average(int arr[], int size) { // Function to calculate the average of array elements
    return (float)sum(arr, size) / size; // Call sum() and divide by size to get average
}

int main() { // Main function
    int arr[5]; // Declare an array of 5 integers
    cout << "Enter 5 numbers: "; // Prompt the user to enter 5 numbers
    for(int i = 0; i < 5; i++) { // Loop to read 5 numbers from user
        cin >> arr[i]; // Store each input in the array
    }

    cout << "Sum: " << sum(arr, 5) << endl; // Output the sum of the array elements
    cout << "Average: " << average(arr, 5) << endl; // Output the average of the array elements

    return 0; // Indicate successful program termination
}
