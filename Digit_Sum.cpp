#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  string x = "123";
  int repeat_count = 3,remainer; 
  int sum=0,sum2=0;
  string t;
// recursion 1 
  for (int i = 0; i < repeat_count; ++i) {
    t.append(x);
  }
  cout << t << endl;
// recursion 2   
   for (int j = 0; j < t.size(); ++j) {
    int digit = std::atoi(t.substr(j, 1).c_str());
    sum+=digit;
  }
  cout<<sum<<endl;
// recursion 3
 while (sum >0)
 {
    remainer=sum%10;
    sum2 += remainer;
    sum/=10;
    
 }
 cout<<sum2<<endl;


  return 0;
}
