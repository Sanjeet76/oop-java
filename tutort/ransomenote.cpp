#include<bits/stdc++.h>
using namespace std;


bool canConstruct(string ransomNote, string magazine) {
    
    vector<int> freq(26, 0);  // Assuming only lowercase English letters, initialize all counts to 0

    // Count the frequency of characters in magazine.
    for (char ch : magazine) {
        freq[ch - 'a']++; // Increment the count for the corresponding character in the vector.
    }

    // Check if the characters in ransomNote can be constructed.
    for (char ch : ransomNote) {
        if (freq[ch - 'a'] > 0) {
            // If the character is available in magazine, decrement its count.
            freq[ch - 'a']--; // Decrease the count of the character in the vector.
        } else {
            // If the character is not available, return false.
            return false;
        }
    }
    return true; 
}

int main() {
    string ransomNote, magazine;
          cout << "Enter the ransomNote: ";
    cin >> ransomNote;
    cout << "Enter the magazine: ";
    cin >> magazine;

    bool result = canConstruct(ransomNote, magazine);

    if (result) {
        cout << "RansomNote can be constructed from magazine." << endl;
    } else {
        cout << "RansomNote cannot be constructed from magazine." << endl;
    }

    return 0;
}
