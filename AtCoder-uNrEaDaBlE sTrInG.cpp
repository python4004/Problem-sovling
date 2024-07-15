#include <iostream>
#include <cctype>

using namespace std;

bool hard_to_read(const string st, int i = 0)
{
   if (st.length() == 0)
   {
      return false;
   }
   if (st.length() == 1)
   {
      return islower(st[0]);
   }

   if (i >= st.length() - 1)
   {
      return true;
   }

   if (islower(st[i]) && isupper(st[i + 1]))
   {
      return hard_to_read(st, i + 2); 
   }
   else
   {
      return false;
   }
}

int main()
{
   string st;
   cin >> st;
   bool result = hard_to_read(st);

   if (result)
   {
      cout << "Yes" << endl;
   }
   else
   {
      cout << "No" << endl;
   }

   return 0;
}
