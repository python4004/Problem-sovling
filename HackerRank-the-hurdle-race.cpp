
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    int n;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s = sizeof(arr) / sizeof(arr[0]); 
    sort(arr, arr + s);
    int result= arr[n-1]-k;
    if(result<0)
    {
        result=0;
    }
    cout <<result<<endl;
    
    return 0;
}
