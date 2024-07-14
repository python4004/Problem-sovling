// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>

using namespace std;
int main() {
    
    stack<int> stack1;
    stack<int> stack2;
    int n,option,x;
    cin>>n;
    while (n>0)
    {
        cin>>option;
        if (option ==1)
        {
            int q;
            cin>>q;
            stack1.push(q);  // 42
            
        }
        else
        {

            if(stack2.empty())
            {
                while(!stack1.empty())
                { 
                    x=stack1.top();
                    stack1.pop();
                    stack2.push(x);
                    
                }
            }
            if(!stack2.empty())
            {
                if(option==2)
                {
                    stack2.pop();
                }
                else
                {
                    cout << stack2.top() << endl;
                }
            }
        }
        n--;
    }

    return 0;
}
