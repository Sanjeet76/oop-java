#include<bits/stdc++.h>
using namespace std;

int main() {
   
    string s, t;

    cout << "Enter the first string: ";
    cin >> s;

    cout << "Enter the second string: ";
    cin >> t;
   
    if (s.length() != t.length()) { // Check if the lengths of the two strings are different
        cout << "False (Different lengths)\n";
        return 0; // Exit the program with a "False" result
    }

    // Sort both strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // Compare the sorted strings to check for anagram
    if (s == t) {
        cout << "True (They are anagrams)\n";
    } else {
        cout << "False (They are not anagrams)\n";
    }

    return 0;
}
