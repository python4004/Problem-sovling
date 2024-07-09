#include <iostream>
#include <vector>
using namespace std; 
int main()
{
   vector<int> nums ={4,5,6,1,2,3};
   int l=0,r=nums.size()-1,mid,result;
   while (l<=r) 
   {
      mid=(l+r)/2; 
      if(nums[mid]<nums[0])  
      { //go left 
         r=mid-1;
         result=nums[mid];
      }
      else 
      {
         l=mid+1;
         
      }


   }
   cout<<result<<endl;
    return 0;
}
