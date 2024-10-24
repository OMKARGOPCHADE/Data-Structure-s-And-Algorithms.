#include <bits/stdc++.h>
using namespace std;
class queue1
{
    int curr_size;
    int size;
    int *arr;
    int start, end;

public:
    queue1(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->start = -1;
        this->end = -1;
        this->curr_size = 0;
    }
    void push(int val)
    {
        if (curr_size >= size)
            cout << "Queue is full!"<< endl;
        if (curr_size != size)
        {
            if (end == -1)
            {
                start = 0, end = 0;
                arr[start] = val;
                curr_size++;
            }
            else
            {
                end = (end + 1) % size;
                arr[end] = val;
                curr_size++;
            }
        }
    }
    int pop()
    {
        if (curr_size == 0)
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int val = arr[start];
        if (curr_size == 1)
        {
            start = -1;
            end = -1;
            curr_size = 0;
        }
        else
        {

            start = (start + 1) % size;
            curr_size--;
        }
        return val;
    }
    int top()
    {
        if (curr_size == 0)
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int val = arr[start];
        return val;
    }
    int Size_fn()
    {
        return curr_size;
    }
};
int main()
{
    queue1 q = queue1(4);
    q.push(10);
    q.push(20);
    cout << q.top() << endl;
    cout << q.pop() << endl;
    q.push(30);
    q.push(40);
    cout << q.top() << endl;    
    q.push(50);
    q.push(70);
    cout << q.pop() << endl;
    q.push(70);
    cout << q.top() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    return 0;
}