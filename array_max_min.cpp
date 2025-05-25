#include <iostream> // Include the input/output stream library
using namespace std; // Use the standard namespace

int main() { // Main function
    int n; // Declare variable to store number of elements
    cout << "Enter number of elements: "; // Prompt user for number of elements
    cin >> n; // Read number of elements from user
    int arr[n]; // Declare an array of size n

    cout << "Enter " << n << " numbers: "; // Prompt user to enter n numbers
    for (int i = 0; i < n; i++) cin >> arr[i]; // Read n numbers into the array

    int max = arr[0], min = arr[0]; // Initialize max and min with the first element

    for (int i = 1; i < n; i++) { // Loop through the array starting from the second element
        if (arr[i] > max) max = arr[i]; // Update max if current element is greater
        if (arr[i] < min) min = arr[i]; // Update min if current element is smaller
    }

    cout << "Max: " << max << "\nMin: " << min << endl; // Output the max and min values
    return 0; // Return 0 to indicate successful execution
}
