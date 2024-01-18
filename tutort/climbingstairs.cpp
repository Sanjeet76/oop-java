# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        
        if (n <= 2) {
            return n;
        }

        // Create a vector (dynamic array) dp of size n+1 and initialize all elements to 0.
        vector<int> dp(n + 1, 0);

        // Initialize the first two elements of dp with 1 and 2, as there is 1 way to climb 1 step and 2 ways to climb 2 steps.
        dp[1] = 1;
        dp[2] = 2;

        // Iterate from 3 to n to calculate the number of ways to climb each step.
        for (int i = 3; i <= n; i++) {
            // The number of ways to climb step i is the sum of the number of ways to climb step i-1 and step i-2.
            dp[i] = dp[i - 1] + dp[i - 2]; 
        }

        // Return the number of ways to climb n stairs.
        return dp[n];
    }
};

int main() {
    
    cout << "Enter the number of stairs:" << endl;
    int n;
    cin >> n;
    // Create an instance of the Solution class.
    Solution solution;
    // Call the climbStairs function on the Solution instance to calculate the result.
    int result = solution.climbStairs(n);
    // Display the result.
    cout << result << endl;
    return 0;
}
