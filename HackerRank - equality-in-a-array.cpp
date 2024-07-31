#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   unordered_map<int ,int> freq;
    int maxFreq = 0;
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   for(auto & num:arr)
   {
      freq[num]++;
      maxFreq=max(maxFreq,freq[num]);
   }
   cout<<n-maxFreq<<endl;

    return 0;
}
