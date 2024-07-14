#include <iostream>
using namespace std;

int main() {
  bool check=true;
  int n;
  cin>>n;
  int top;
  cin>>top;
  int down=7-top;
  int d1,d2;
  for (int i=0;i<n;i++)
  {
      cin >>d1>>d2;
      if(7-d1==down||7-d1==top|| 7-d2==top|| 7-d2==down)
      {
          check=false;
      }
  }
  if (check)
  {
      cout<<"YES"<<endl;
  }
  else cout <<"NO"<<endl;
  return 0;
}
