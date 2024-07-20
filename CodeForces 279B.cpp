#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int  n , t ;
     cin>>n>>t ;
     int arr[n];
     for(int i=0 ; i< n ; i++){
         cin>>arr[i];
     }
     int  l =0 , r =0  , sum =0 , ans  =0 ;
     while( r < n)
     {
         sum += arr[r] ;  //4 5
         if(sum <= t)
         {
          
             ans = max( ans , (r-l +1 )) ; //1
         }
         while(sum> t)
         {
            sum-=arr[l] ; 
            l++; 
         }
         r++;
 
     }
     cout<< ans<<endl ; 
 
    return 0;
}
