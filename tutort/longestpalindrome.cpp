#include<bits/stdc++.h>
using namespace std;


int longestPalindrome(string s) {
    unordered_map<char, int> charCount; // Create an unordered map to store character frequencies.

    // Count the frequency of each character in the string
    for (char c : s) {
        charCount[c]++; 
    }

    int length = 0; // Initialize the variable to store the length of the longest palindrome.
    bool hasOddFrequency = false; // Initialize a flag to check if there's at least one character with an odd frequency.

    for (auto& pair : charCount) {
        int count = pair.second; // Get the count (frequency) of the character.
        if (count % 2 == 0) {
            // If the count is even, add it to the length because even counts can contribute to a palindrome.
            length += count;
        } else {
            // If the count is odd, add (count - 1) to the length because odd counts can contribute up to (count - 1) characters to a palindrome.
            length += count - 1;
            hasOddFrequency = true; // Set the flag to true since there's at least one character with an odd frequency.
        }
    }

    // If there is at least one character with odd frequency, add 1 to the length to accommodate it in the palindrome.
    if (hasOddFrequency) {
        length++;
    }

    return length; 
}

int main() {
    string s ;
    cout<<"enter the string"<<endl;
    cin>>s;
    int result = longestPalindrome(s); // Call the function to compute the result.
    cout << "Longest palindrome length: " << result << endl; 
    return 0;
}
