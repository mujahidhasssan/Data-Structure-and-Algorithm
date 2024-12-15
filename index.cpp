#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to check if a string is a palindrome
bool is_palindrome(const string& s) {
    stack<char> stk;
    
    // Push all characters of the string onto the stack
    for (char ch : s) {
        stk.push(ch);
    }
    
    // Rebuild the string by popping characters from the stack
    string reversed_s = "";
    while (!stk.empty()) {
        reversed_s += stk.top();
        stk.pop();
    }
    
    // Check if the original string is equal to the reversed string
    return s == reversed_s;
}

int main() {
    string input_string = "madam";
    
    // Check if the string is a palindrome
    if (is_palindrome(input_string)) {
        cout << "'" << input_string << "' is a palindrome." << endl;
    } else {
        cout << "'" << input_string << "' is not a palindrome." << endl;
    }
    
    return 0;
}
