#include <iostream>
using namespace std;

int main()
{
    int arr[3];
    for (int i=0 ;i<3;i++)
    {
        cin>>arr[i];
    }
    int a=arr[1]; //1 
    arr[1]=arr[0];
    arr[0]=arr[2];  
    arr[2]=a;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    
    

}
