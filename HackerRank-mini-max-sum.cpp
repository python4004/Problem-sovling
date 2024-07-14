#include <iostream>
#include <vector>
#include <sstream> // for stringstream
#include <algorithm> 
using namespace std;

int main() {
  long long numbers[5];
  unsigned long long max=0;
  unsigned long long mini=0;

  for (int i = 0; i < 5; ++i) 
  {
   cin >> numbers[i] ;
    
  }

  int size = sizeof(numbers) / sizeof(numbers[0]); 
  sort(numbers, numbers + size);  
  
  for (int i = 0; i < size-1; ++i)
  {
    mini+=numbers[i];
  }
for (int j = 1; j < size ; ++j)
  {
    max+=numbers[j];
  }
  
  cout <<mini<<" "<<max<<endl;



  return 0;
}
