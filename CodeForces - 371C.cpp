#include <iostream>
#include <vector>

using namespace std;

long long ruble;
vector<long long> must(3, 0);
vector<long long> have(3, 0);
vector<long long> price(3, 0);

bool check(long long mid) {
    long long need = 0;
    for (int i = 0; i < 3; i++) {
        long long required = mid * must[i];
        need += max(0LL, required - have[i]) * price[i];
        if (need > ruble) return false;  // Early termination if rubles are insufficient
    }
    return need <= ruble;
}

int main() {
    string ingredient;
    cin >> ingredient;
    
    // Use correct type for loop to avoid signed/unsigned comparison warning
    for (size_t i = 0; i < ingredient.length(); i++) {
        if (ingredient[i] == 'B') must[0]++;
        else if (ingredient[i] == 'S') must[1]++;
        else if (ingredient[i] == 'C') must[2]++;
    }
    
    cin >> have[0] >> have[1] >> have[2];
    cin >> price[0] >> price[1] >> price[2];
    cin >> ruble;

    long long low = 0, high = 1e13, mid = 0, ans = 0;
    while (low <= high) {
        mid = low + (high - low) / 2;
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
