#include <iostream>
#include <queue> 
using namespace std;
int main()
{
    int n,d,value;
    queue<int>myqueu;
    queue<int>temp;
    cin >>n>>d;
    for (int i=0;i<n;i++)
    {
        cin>>value;
        myqueu.push(value);
    }
     for (int j=0;j<d;j++)  // 1 2 3 4 5 d=2 -> 2 3 4 5 1 ->3 4 5 2 1 
    {
        temp.push(myqueu.front()); // 1 2 
        myqueu.pop(); // 2 3 4 5  3 4 5
    }
    for (int k=n-d;k<n;k++)
    {
        myqueu.push(temp.front());
        temp.pop();
    }
    while(!myqueu.empty())
    {
        cout<<myqueu.front()<<" ";
        myqueu.pop();
    }

    return 0;
}
