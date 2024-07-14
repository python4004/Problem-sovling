#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int super_digit(const string &n,int k)
{
    long long intial_sum=0;
    if (n.length() == 1)
    {
        return stoi(n);
    }
    else
    {
       for (char c:n) 
        {
            intial_sum+=c-48; 
        }
       long long  mid_sum=intial_sum*k;
       
       long long final_sum = 0;
      while (mid_sum > 0)
      {
        final_sum += mid_sum % 10;
        mid_sum /= 10;
      }
      return super_digit(to_string(final_sum),1);
    }
    
}

int main()
{
    string n;
    int k;
    cin >> n >> k;
    int digit = super_digit(n,k);
    cout << digit << endl;

    return 0;
}
