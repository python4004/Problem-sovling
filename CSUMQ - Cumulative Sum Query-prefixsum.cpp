#include <iostream>

using namespace std;

int main()
{
   int n,q,i,j;
   cin>>n;
   int arr[n];
   for(int j=0;j<n;j++)
   {
      cin>>arr[j];
   }
   int prefixSum[n];
   prefixSum[0]=arr[0];
   for (int i = 1; i < n; i++)
   {
      prefixSum[i]=prefixSum[i - 1] + arr[i];
   }
   cin>>q;
   while(q--)
   { 
      cin>>i>>j;
      int sum = prefixSum[j] - (i > 0 ? prefixSum[i - 1] : 0);
      cout << sum << endl;
   }
   
   

    return 0;
}
