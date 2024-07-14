#include <iostream>
using namespace std;

int main()
{
    int n;
    long sum=0;
    cin>>n;
    long arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout <<sum<<endl;

    
    return 0;
}
