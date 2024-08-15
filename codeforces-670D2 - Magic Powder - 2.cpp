#include <iostream>
#include <vector>

using namespace std;

long long  k, n;
vector<long long> must;
vector<long long> have;

bool check(long long mid) {
    long long need = 0;
    for (int i = 0; i < n; i++) {
        if (must[i] * mid > have[i]) {
            need += (must[i] * mid - have[i]);
        }
        if (need > k) {
            return false;
        }
    }
    return need <= k;
}

int main() {
    cin >> n >> k;
    
    // Initialize vectors with size n
    must.resize(n);
    have.resize(n);
    
    for (int i = 0; i < n; i++) {
        cin >> must[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> have[i];
    }
    
    long long low = 0, high = 1e10, mid = 0, ans = 0;
    while (low <= high) {
        mid = (high + low) / 2;
        if (check(mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}
