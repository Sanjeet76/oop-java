#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    
    string str = "";
    for (char c : s) {
        if (isalnum(c)) {
            str += tolower(c);// Remove non-alphanumeric characters and convert to lowercase
        }
    }

 
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // If characters don't match, it's not a palindrome
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string input;
    
    // Take user input
    cout << "Enter a string: ";
    cin >> input;

    // Check if the input is a palindrome and print the result
    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
