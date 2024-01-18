#include<bits/stdc++.h> 
using namespace std; 
class Solution { 
public:
    int maxProfit(vector<int>& prices) { //create maxprofit function
        int maxprofit=0; // Initialize a variable 'maxprofit' to store the maximum profit
        int minprice=INT_MAX; // Initialize a variable 'minprice' to store the minimum price, starting with the maximum possible integer value.

        for(int i=0;i<prices.size();i++) { 
            minprice=min(minprice,prices[i]); // update minprice
            maxprofit=max(maxprofit,prices[i]-minprice); // Update 'maxprofit' by taking the maximum of the current 'maxprofit' and the difference between the price at index 'i' and 'minprice'.
        }
        return maxprofit; // Return the maximum profit 
    }
};

int main() { 
   
    int n;
    cout << "Enter the number of days: "; 
    cin >> n; 

    vector<int> prices(n); 
    cout << "Enter the prices for each day: "; 
    for (int i = 0; i < n; ++i) { 
        cin >> prices[i]; 
    }

    Solution solution; // Create an instance of the 'Solution' class.
    int result = solution.maxProfit(prices); 

  
    cout << "Maximum profit: " << result << endl;

    return 0; 
}
