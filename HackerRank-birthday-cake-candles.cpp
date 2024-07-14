#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    int x=0;
    cin>>n;
    int arr[n];
    for (int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int size=sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int max=arr[n-1];
    for (int j=0;j<size;j++)
    {

        if( max==arr[j])
        {
           x=x+1; 
        }
        else continue;
    }
    
    cout<<x <<endl;
 


    return 0;
}
