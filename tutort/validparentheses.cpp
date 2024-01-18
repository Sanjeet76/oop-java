#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;//create empty stack

    for (char c : s) {//loop through each char in string
        if (c == '(' || c == '{' || c == '[') {//if char is in open bracket
            st.push(c);  // Push open brackets onto the stack
        } else {
            // Check if the stack is empty (no matching open bracket)
            if (st.empty()) {
                return false;
            }

            // Check if the current closing bracket matches the top of the stack
            char top = st.top();
            if ((c == ')' && top == '(') || (c == '}' && top == '{') || (c == ']' && top == '[')) {//if matching pair is their
                st.pop();  // Matching pair found, pop the open bracket
            } else {
                return false;  // Mismatched brackets
            }
        }
    }

    // If the stack is empty at the end, all brackets matched
    return st.empty();
}

int main() {
    string input;
    
    cout << "Enter a string containing parentheses, curly braces, and square brackets: ";
    cin >> input;

    if (isValid(input)) {
        cout << "The input string is valid." << endl;
    } else {
        cout << "The input string is not valid." << endl;
    }

    return 0;
}
