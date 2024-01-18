#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int s = 0;
        int e = nums.size() - 1;

      
        while (s <= e) {
            // Calculate the middle index 
            int mid = (e + s) / 2;

            // Check if the middle element is equal to the target
            if (nums[mid] == target) {
                
                return mid;
            }
            
            // If 'target' is less than the middle element, update 'e' to search in the left half of the current range.
            if (target < nums[mid]) {
                e = mid - 1;
            }
            
            // If 'target' is greater than the middle element, update 's' to search in the right half of the current range.
            if (target > nums[mid]) {
                s = mid + 1;
            }
        }

        // If the 'target' element is not found  return -1.
        return -1;
    }
};

int main() {
    // Create an instance of the Solution class.
     Solution solution;
    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    // Call the 'search' method to find the index of the target element in the vector 'nums'.
    int result = solution.search(nums, target);

    if (result != -1) {
        cout << target << " found at index " << result << endl;
    } else {
        cout <<  target << " not found in the vector." << endl;
    }

    return 0;
}
