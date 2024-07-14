#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

    string str;
    cin >> str;

    stack<char> st;
    for (char c : str) {
        if (!st.empty() && st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    }

    cout << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}
