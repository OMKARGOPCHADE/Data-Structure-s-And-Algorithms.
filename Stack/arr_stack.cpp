#include <bits/stdc++.h>
using namespace std;
class arr_stack
{
    int *arr;
    int top;
    int cap;

public:
    arr_stack(int cap)
    {
        this->cap = cap;
        this->arr = new int[cap];
        this->top = -1;
    }

    bool isEmpty()
    {
        if (this->top == -1)
            return true;
        return false;
    }
    bool isFull()
    {
        if (this->top == this->cap-1)
            return true;
        return false;
    }
    int Top()
    {
        if (!isEmpty())
        {
            return arr[top];
        }
        return -1;
    }
    void pop()
    {
        if (!isEmpty())
        {
            top--;
            cout << "Value Deleted!";
        }
        else
            cout << "Stack UnderFlow";
    }
    void push(int num)
    {
        if (!isFull())
        {
            arr[++top] = num;
        }
        else
            cout << "Stack Overflow!";
    }
};

int main()
{
    cout << "Welcome To Stack Game!";
    cout<<"\nPlease Size of the stack: ";
    int cap;
    cin>>cap;
    arr_stack st = arr_stack(cap);
    while (true)
    {
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Top";
        cout << "\n4. Exit";
        int choice;
        cout << "\nPlease Enter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int num;
            cout << "\n Please Enter a number: ";
            cin >> num;
            st.push(num);
            break;
        case 2:
            st.pop();
            break;
        case 3:
            cout << "Top Of The Stack is: " << st.Top();
            break;
        case 4:
            exit(0);
        default:
            cout << "Please Enter a valid choice: ";
            cin >> choice;
            break;
        }
    }
    return 0;
}