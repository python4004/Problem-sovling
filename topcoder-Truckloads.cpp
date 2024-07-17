#include <iostream>
using namespace std;

int num_trucks(int num_crates, int load_size) 
{

  if (num_crates <= load_size)
  {
    return 1;
  }

  return num_trucks(num_crates / 2, load_size) + num_trucks(num_crates- (num_crates /2) , load_size);
}

int main() {
  int total_crates, truck_capacity;

  while(cin>>total_crates>>truck_capacity) 
  
   {int num_trucks_needed = num_trucks(total_crates, truck_capacity);
     cout << num_trucks_needed <<endl;}

  return 0;
}
