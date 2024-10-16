#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 
    Node* next;
    int data;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node* Add_Begin(vector<int>v)
{
    Node* head=nullptr;
    for(auto i: v)
    {
        if(head==nullptr)
        {
            head = new Node(i);// head(10)->null
        }
        else{
            Node* temp = new Node(i);//temp(20)->null
            temp->next = head;//temp->head = temp(20)->(10)
            head = temp;//head = temp -> head(20)->(10)
        }
    }
    return head;
}
Node* Add_end(vector<int>v)
{
    Node* head = nullptr;
    Node* temp = head;
    for(auto i: v)
    {
        if(head==nullptr)
        {
            head = new Node(i);
            temp = head;
        } 
        else 
        {
            temp->next = new Node(i);
            temp = temp->next;
        }
    }
    return head;
}
Node *insertAtGivenIndex(int ind, int val, Node *head)
{
    if (head == nullptr)
    {
        if (ind == 1)
        {
            head = new Node(val);
            return head;
        }
        else
            return nullptr;
    }
    if (ind == 1)
    {
        Node *temp = new Node(val);
        temp->next = head;
        return temp;
    }
    int cnt = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == (ind - 1))
        {
            Node *a = new Node(val);
            a->next = temp->next;
            temp->next = a;
            return head;
        }
        temp = temp->next;
    }
    return head;
}
void printNode(Node* head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
Node* deleteLastNode(Node* head)
{
    if(head == nullptr || head->next==nullptr) return nullptr;
    Node* temp = head;
    while(temp->next->next!=nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}
Node* revNode(Node* head)
{
    if(head==nullptr||head->next==nullptr)return head;
    vector<int>v;
    while(head!=nullptr)
    {
        v.emplace_back(head->data);
        head = head->next;
    }
    //sort(v.begin(),v.end());
    //Node* temp = head;
    for(auto i : v)
    {
        if(head==nullptr) head = new Node(i);
        else{
            Node* temp = new Node(i);
            temp->next = head;
            head = temp;
        }

    }
    return head;
}
int main()
{
    vector<int>v = {10,20,40,30};
    Node* head;
    //head = Add_Begin(v)
    head = Add_end(v);
    // head = insertAtGivenIndex(2,50,head);
    // head = deleteLastNode(head);
    // printNode(head);
    // cout<<endl;
    // head = deleteLastNode(head);
    printNode(head);
    cout<<endl;
    head = revNode(head);
    printNode(head);
    return 0;
}