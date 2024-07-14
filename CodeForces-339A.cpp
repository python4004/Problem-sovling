#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string sum_1;
    string sum_2;
    cin>>sum_1;
    
    for(int i=0;i<sum_1.size();i++)
    {
        if(sum_1[i]!='+')
        {
            sum_2.push_back(sum_1[i]);
        }
        
    }
    sort(sum_2.begin(),sum_2.end());
    cout<<sum_2[0];
    for(int k=1;k<sum_2.size();k++)
    {
        cout<<"+"<<sum_2[k];
    }


    return 0;
}
