#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  int n,m=0;
  cin>>n>>str;
  for ( int i = 0; i < n - 1; ++i)
  {
    if (str[i] == str[i + 1])
    { m++;
      
    }
  }
  cout <<m<<endl;
  return 0;
}
