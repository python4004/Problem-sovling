#include <iostream>
using namespace std;

int main()
{
    int t;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>t;
        int h = 1;
        for (int i=0;i<t;i++)
        {
            if(i%2==1)
            {
             h++;
            
            }
            else h=2*h; 
            
        }
        cout<<h<<endl;
    }
    
    return 0;
}
