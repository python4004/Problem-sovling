#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isBalanced(string str) {
    stack<char> st;
    for (char c : str) {
        if (c == '[' || c == '{' || c == '(') {
            st.push(c);
        } else if (c == ']' || c == '}' || c == ')') {
            if (st.empty()) {
                return false; // No matching opening bracket
            }
            char top = st.top();
            if ((c == '}' && top == '{') || (c == ']' && top == '[') || (c == ')' && top == '(')) {
                st.pop();
            } else {
                return false; // Mismatched bracket
            }
        }
    }
    return st.empty();
}

int main() {
    int n;
    cin >> n;
    string value;
    for (int j = 0; j < n; j++) {
        cin >> value;
        if (isBalanced(value)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
