#include <bits/stdc++.h>
using namespace std;

bool isBadVersion(int version);
// Declare a function isBadVersion that takes an integer argument 'version' and returns a boolean value.

int findFirstBadVersion(int n) {
    // Define a function named findFirstBadVersion that takes an integer argument 'n'.

    int left = 1;
    int right = n;
    // Initialize two integer variables, 'left' to 1 and 'right' to 'n'.

    while (left < right) {
        // Start a while loop that continues as long as 'left' is less than 'right'.

        int mid = left + (right - left) / 2;
        // Calculate the middle point between 'left' and 'right' to divide the search space in half.

        if (isBadVersion(mid)) {
            // Check if the 'mid' version is bad by calling the 'isBadVersion' function.

            // If mid is bad, move left to check earlier versions
            right = mid;
            // Update 'right' to 'mid' because the first bad version must be to the left of 'mid'.
        } else {
            // If mid is not bad, move right to check later versions
            left = mid + 1;
            // Update 'left' to 'mid + 1' because the first bad version must be to the right of 'mid'.
        }
    }

    return left; 
    
}

int main() {
    int n, bad;
    cout << "Enter the total number of versions: ";
    cin >> n;
    cout << "Enter the bad version: ";
    cin >> bad;
    int result = findFirstBadVersion(n);
    cout << "The first bad version is: " << result << endl;
    return 0;
}


bool isBadVersion(int version) {
    
    return version ; 
}