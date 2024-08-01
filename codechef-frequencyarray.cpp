#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;
        unordered_map<int, int> freq;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            ++freq[arr[i]];
        }
        
        bool isBeautiful = true;
        for (int i = 1; i <= n; i++) {
            if (freq[i] != 1) {
                cout << "ne krasivo" << endl;
                isBeautiful = false;
                break;
            }
        }
        
        if (isBeautiful) {
            cout << "prekrasnyy" << endl;
        }
    }
    return 0;
}
