#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {   //create a function of two sum which takes a vector of integer nums and integer target parameter
        vector<int> ans;//create a vector to store ans
        unordered_map<int, int> map;//declare a map to store number and their index
        for (int i = 0; i < nums.size(); i++) {
            if (map.find(target - nums[i]) != map.end()) {//this check difference target-nums[i]
                ans.push_back(map[target - nums[i]]);
                ans.push_back(i);//pair is found then store
                return ans;
            }
            map[nums[i]] = i;// pair not found then go back to for loop
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums;
    int target;

    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    cout << "Enter the target value: ";
    cin >> target;

    vector<int> result = solution.twoSum(nums, target);

    if (result.size() == 2) {
        cout << "Indices of the two numbers that add up to the target are: "
             << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
