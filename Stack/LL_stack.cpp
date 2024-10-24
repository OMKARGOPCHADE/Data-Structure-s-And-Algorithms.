#include<iostream>
using namespace std;
class Node
{
    public:
        Node* next;
        int val;
        Node(int val)
        {
            this->next = nullptr;
            this->val = val;
        }
};
class LL_stack
{
private:
    int size;
    int curr_size = 0;
    Node* node;
public:
    LL_stack(int size)
    {
        this->size = size;
        this->node = nullptr;
    }
    void push(int val)
    {
        if(is_Full()) cout<<"Stack OverFlow!"<<endl;
        else if(node==nullptr)
        {
            node = new Node(val);
            curr_size++;
        }
        else 
        {
            Node* temp = node;
            node = new Node(val);
            node->next = temp;
            curr_size++;
        }
    }
    int top()
    {
        if(!is_Empty())
        {
            return node->val;
        }
        else
        {
            cout<<"Stack Underflow"<<endl;
             return -1;
        }
    }
    bool is_Full()
    {
        if(curr_size == size) return true;
        return false;
    }
    bool is_Empty()
    {
        if(curr_size==0)return 1;
        return 0;
    }
    void pop()
    {
        if(!is_Empty())
        {
            Node* temp = node;
            node = node->next;
            curr_size--;
            delete temp;
        }
    }
};
int main()
{
    LL_stack st = LL_stack(4);
    cout<<st.is_Empty()<<endl;
    cout<<st.is_Full()<<endl;
    st.push(10);
    st.push(20);
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    cout<<st.top()<<endl;
    st.push(14);
    st.pop();
    cout<<st.top()<<endl;
    st.push(15);
    cout<<st.top();
    return 0;
}