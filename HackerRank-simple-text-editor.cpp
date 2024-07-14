#include <iostream>
#include <stack>
#include <string>

using namespace std;

void add_text(stack<char> &stack1, string &text2, stack<pair<string, int>> &undo_stack) {
    for (char c : text2) 
    {
        stack1.push(c);
    }
    undo_stack.push(make_pair(text2, 1));
}

void delete_text(stack<char> &stack1, stack<char> &deleted_stack, int x, stack<pair<string, int>> &undo_stack) 
{
    string deleted_chars;
    for (int i = 0; i < x && !stack1.empty(); ++i)
    {
        deleted_chars.push_back(stack1.top());
        deleted_stack.push(stack1.top());
        stack1.pop();
    }
    undo_stack.push(make_pair(deleted_chars, 2));
}

void print_stack(stack<char> &stack1, int d) {
    if (stack1.empty())
    {
        cout << "Error: Stack is empty. No character to print.\n";
        return; 
    }

    int size = stack1.size();
    if (d > size || d <= 0)
    {
        cout << "Invalid position. Please enter a number between 1 and " << size << ".\n";
        return;  
    }

    stack<char> temp;
    for (int i = 0; i < size - d; ++i)
    {
        temp.push(stack1.top());
        stack1.pop();
    }

    cout << stack1.top() << endl;

    while (!temp.empty()) 
    {
        stack1.push(temp.top());
        temp.pop();
    }
}

void undo(stack<char> &stack1, stack<char> &deleted_stack, stack<pair<string, int>> &undo_stack)
{
    if (undo_stack.empty())
    {
        return;
    }
    
    auto last_operation = undo_stack.top();
    undo_stack.pop();
    
    if (last_operation.second == 1) 
    { 
        string added_text = last_operation.first;
        for (size_t i = 0; i < added_text.length(); ++i) {
            stack1.pop();
        }
    } 
    else if (last_operation.second == 2)
    {  
        string deleted_text = last_operation.first;
        for (size_t i = deleted_text.length(); i > 0; --i) {
            stack1.push(deleted_text[i - 1]);
            deleted_stack.pop();
        }
    }
}

int main() 
{
    stack<char> stack1;
    stack<char> deleted_stack;
    stack<pair<string, int>> undo_stack;  
    
    string text;
    int choice, x, d,n;
    cin>>n;
    while (n>0)
    {
        cin >> choice;
        switch (choice)
        {
            case 1:
                cin >> text;
                add_text(stack1, text, undo_stack);
                break;

            case 2:
                cin >> x;
                delete_text(stack1, deleted_stack, x, undo_stack);
                break;

            case 3:
                cin >> d;
                print_stack(stack1, d);
                break;

            case 4:
                undo(stack1, deleted_stack, undo_stack);
                break;

        }
        n--;
    }

    return 0;
}
