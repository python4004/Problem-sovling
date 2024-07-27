#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int start=-2e9;
    int end=2e9;
    int n,num;
    string op;
    char ans;
    cin>>n;
    while(n--)
    {
       cin>>op>>num>>ans;
      if(ans=='Y')
      {
         if(op==">=")
         {
            start=max(start,num);
         }
         else if(op=="<=")
         {
            end=min(end,num);
         }
         else if(op=="<" )
         {
            end=min(end,num-1);
         }  
         else if(op==">")
         {
           start=max(start,num+1);
         }
      }
      else if(ans=='N')
      {
         if(op==">=")
         {
            end=min(end,num-1);  
         }
         else if(op=="<=")
         {
            start=max(start,num+1);
         }
         else if(op=="<" )
         {
            start=max(start,num);
         }  
         else if(op==">")
         {
           end=min(end,num);
         }
      }
    }
    if(start>end)
    {
       cout<<"Impossible"<<endl;
    }
    else
    {
      cout<<start<<endl; 
    }
   

    return 0;
}
