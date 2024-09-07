#include <iostream>
#include <vector>
#include <algorithm> // For reverse

// Function to rotate array to the left by 3 positions
void rotateLeftByThree(std::vector<int> &arr) {
    int n = arr.size();
    if (n < 3) {
        return; // No rotation needed if the array has fewer than 3 elements
    }
    
    // Step 1: Reverse the first 3 elements
    std::reverse(arr.begin(), arr.begin() + 3);
    
    // Step 2: Reverse the remaining elements
    std::reverse(arr.begin() + 3, arr.end());
    
    // Step 3: Reverse the entire array
    std::reverse(arr.begin(), arr.end());
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    
    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    
    rotateLeftByThree(arr);
    
    std::cout << "\nArray after left rotation by 3 positions: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    
    return 0;
}
