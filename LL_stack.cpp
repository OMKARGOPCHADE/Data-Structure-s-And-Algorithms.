#include <iostream>
using namespace std;
class LL_stack
{
public:
    LL_stack *next;
    int data;
    LL_stack(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
    // stack functions
    bool isEmpty(LL_stack *head)
    {
        if (head == nullptr)
            return true;
        return false;
    }
    int top(LL_stack *head)
    {
        if (!isEmpty(head))
        {
            LL_stack* temp = head;
            while (temp->next!=nullptr)
            {
                temp = temp->next;
            }
            return temp->data;
        }
        else
        {
            cout << "stack is empty!";
        }
        return -1;
    }
    LL_stack *pop(LL_stack *head)
    {
        if (!isEmpty(head))
        {
            if (head->next == nullptr)
            {
                delete head;
                return nullptr;
            }

            LL_stack *temp = head;
            LL_stack *prev = temp;
            while (temp->next != nullptr)
            {
                prev = temp;
                temp = temp->next;
            }
            prev->next = nullptr;
            delete temp;
        }
        return head;
    }
    LL_stack *push(LL_stack* head, int data)
    {
        if(head==nullptr)
        {
            head = new LL_stack(data);
            return head;
        }
        LL_stack* temp = head;
        while(temp->next!=nullptr)
        {
            temp = temp->next;
        }
        temp->next = new LL_stack(data);
        return head;
    }
};
int main()
{
    LL_stack* head = new LL_stack(10);
    cout<<head->top(head);
    head = head->push(head,20);
    head = head->push(head,30);
    cout<<endl<<head->top(head);
    head = head->push(head,40);
    head = head->push(head,50);
    cout<<endl<<head->top(head);
    head = head->pop(head);
    cout<<endl<<head->top(head);
    head = head->pop(head);
    cout<<endl<<head->top(head);
    return 0;
}