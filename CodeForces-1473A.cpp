#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    
  int c;
  cin>>c;
 while(c--){ 
  int n,d;
  cin>>n>>d; 
  int arr[n];
  for ( int i = 0; i <n; ++i)
  {
    cin>>arr[i];
  }
  int x = sizeof(arr) / sizeof(arr[0]);
  sort(arr,arr+x);
  if(arr[0]+arr[1]<=d || arr[n-1] <=d)
  {
      cout<<"YES"<<endl;
  }
  else cout<<"NO"<<endl;
 }
  return 0;
}
