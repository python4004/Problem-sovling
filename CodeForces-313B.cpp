#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    
    vector<int> cumulativeSum(n, 0);
    for (int i = 1; i < n; ++i) {
        cumulativeSum[i] = cumulativeSum[i - 1] + (s[i] == s[i - 1] ? 1 : 0);
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        if (1 <= l && l < r && r <= n) {
            cout << cumulativeSum[r - 1] - cumulativeSum[l - 1] << endl;
        }
    }

    return 0;
}
