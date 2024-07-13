#include <iostream>
#include <vector> 
using namespace std;

int fibonaci(int n)
{ 
   vector<int> sequence={0,1};
   for (int i=2;i<n+1;i++)
   {
      sequence.push_back(sequence[i-1]+sequence[i-2]);
   }
   if(n==0)
   {
       return 0;
   }
   else if(n==1)
   {
       return 1;
   }
   else { return fibonaci(n-1) +fibonaci(n-2);}

   
}
int main()
{
   int n;
   cin>>n;
   int f=fibonaci(n);
   cout<<f<<endl;

    return 0;
}
