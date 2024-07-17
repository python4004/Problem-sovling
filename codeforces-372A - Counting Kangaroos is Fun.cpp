#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int l = 0,r = (n + 1) / 2;  
    int count = 0;

    while (r < n)
    {
        if (arr[l] * 2 <= arr[r]) 
        { 
            count++;
            l++;  
        }
        r++;  
    }

    int result = n - count;
    cout << result << endl;

    return 0;
}
