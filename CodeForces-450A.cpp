#include <iostream>
#include <queue>

using namespace std;
int main()
{
    queue<pair<int,int>>jazz;
    int n,m,a,child=0;
    
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        jazz.push({i,a});
    }
    
    while(!jazz.empty())
    {
        auto top =jazz.front();
        jazz.pop();
      if(top.second >m)
      {
          top.second-=m;
          jazz.push(top);
      }
      else
      {
        child=top.first+1;  
      }
      
  
    }
    cout<<child<<endl;

    return 0;
}
