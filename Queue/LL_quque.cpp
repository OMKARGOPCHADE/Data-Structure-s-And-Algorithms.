#include<bits/stdc++.h>
using namespace std;
class LL_quque
{
public:
    int val;
    LL_quque* next;
    LL_quque(int val)
    {
        this->next = nullptr;
        this->val = val;
    }

};
class queue_1{
    private:
        LL_quque *front, *rear;
        int cap, curr_cap;
    public:
        queue_1(int cap)
        {
            this->cap = cap;
            this->curr_cap = 0;
            this->front = nullptr;
            this->rear = nullptr;
        }
        void push(int val)
        {
            if(isFull()) cout<<"Queue is Full"<<endl;
            else if(rear == nullptr)
            {
                front = new LL_quque(val);
                rear = front;
                curr_cap++;
            }
            else{
                rear->next = new LL_quque(val);
                rear = rear->next;
                curr_cap++;
            }
        }
        int pop()
        {
            if(isEmpty()) cout<<"Stack is Empty!"<<endl;
            else{
                int val = front->val;
                LL_quque* temp = front;
                front = front->next;
                curr_cap--;
                delete temp;
                return val;
            }
            return -1;
        }
        int Front()
        {
            if(isEmpty()) cout<<"Stack is Empty!"<<endl;
            else{
                return front->val;
            }
            return -1;
        }
        bool isEmpty()
        {
            if(curr_cap == 0)
            { 
                rear = nullptr;
                front = nullptr;
                return 1;
            }
            return 0;
        }
        bool isFull()
        {
            if(curr_cap == cap)return 1;
            return 0;
        }
};
int main()
{
    queue_1 q = queue_1(4);
    cout<<q.Front()<<endl;
    cout<<q.isEmpty()<<endl;
    cout<<q.isFull()<<endl;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.Front()<<endl;
    q.push(50);
    cout<<q.pop()<<endl;
    q.push(50);
    cout<<q.Front()<<endl;
    cout<<"pop"<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    q.push(50);
    cout<<q.Front()<<endl;
    return 0;
}