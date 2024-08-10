#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int data)
    {
        val = data;
        next = nullptr;
        prev = nullptr;
    }
};
// Insert from begin in DLL
Node *insertAtBegin(Node *head, int val)
{
    if (head == nullptr)
        head = new Node(val);
    else
    {
        Node *temp = head;
        head = new Node(val);
        head->next = temp;
        temp->prev = head;
    }
    return head;
}
// print DLL
void print_DLL(Node *head)
{
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
// insert AT end
Node *insertAtEnd(Node *head, int val)
{
    if (head == nullptr)
        head = new Node(val);
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    Node *a = new Node(val);
    a->prev = temp;
    temp->next = a;
    return head;
}
// create DLL using recursion adding at end
Node *create_DLL_End(int arr[], int size, int ind, Node *back)
{
    if (size == ind)
        return nullptr;
    Node *temp = new Node(arr[ind]);
    temp->prev = back;
    temp->next = create_DLL_End(arr, size, ind + 1, temp);
    return temp;
}
// create DLL using recursion adding at begin
Node *create_DLL_Begin(int arr[], int size, int ind, Node *next)
{
    if (size == ind)
        return nullptr;
    Node *temp = new Node(arr[ind]);
    temp->next = next;
    temp->prev = create_DLL_Begin(arr, size, ind + 1, temp);
    return temp;
}
Node *insertATPos(int pos, Node *head, int value)
{
    if (head == nullptr)
    {
        head = new Node(value);
        return head;
    }
    if (pos == 0)
    {
        Node *temp = new Node(value);
        temp->next = head;
        head->prev = temp;
        head = temp;
        return head;
    }
    Node *temp = head;
    while (--pos && temp->next!=nullptr)
    {
        temp = temp->next;
    }
    if (temp->next == nullptr)
    {
        Node *a = new Node(value);
        a->prev = temp;
        temp->next = a;
    }
    else
    {
        Node *a = new Node(value);
        a->next = temp->next;
        a->prev = temp;
        temp->next = a;
        a->next->prev = a;
        return head;
    }
    return head;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Node *head = nullptr;
    // for (auto i : arr)
    // {
    //     if (head == nullptr)
    //     {
    //         head = new Node(i);
    //     }
    //     else
    //     {
    //         Node *temp = head;
    //         head = new Node(i);
    //         head->next = temp;
    //         temp->prev = head;
    //     }
    // }
    // head = insertAtBegin(head, 11);
    // print_DLL(head);
    // cout<<endl;
    // head = insertAtEnd(head,66);
    // print_DLL(head);
    // head = create_DLL_Begin(arr,10,0,NULL);
    // print_DLL(head);
    // cout<<endl;
     head = create_DLL_End(arr,10,0,NULL);
    // print_DLL(head);
    // while(head->prev!=nullptr)head=head->prev;
    // print_DLL(head);
    head = insertATPos(11, head, 55);
    print_DLL(head);
    return 0;
}