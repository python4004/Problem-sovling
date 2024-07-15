#include <iostream>
#include <vector>
using namespace std;
int i=0;
vector<int> Remove(int arr[], int x, int n, int i = 0)
{
    if (i >= n) {
        return {};
    }

    vector<int> result = Remove(arr, x, n, i + 1);

    if (arr[i] != x) {
        result.insert(result.begin(), arr[i]);
    }

    return result;
}
int main()
{
   int x, n;
    cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> z = Remove(arr, x, n);
    for (int i = 0; i < z.size(); i++) {
        cout << z[i] << " ";
    }
    cout << endl;

    return 0;
}
