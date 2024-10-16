#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};
// array insertion from begining
Node *insertionAtBegin(int arr[], int size)
{
    Node *head = NULL;
    for (int i = 0; i < size; i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
        }
        else
        {
            Node *temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }
    // printLinkedList(head);
    return head;
}
// array insertion at end
Node *insertionAtEnd(int arr[], int size)
{
    Node *tail = NULL;
    Node *head = NULL;
    for (int i = 0; i < size; i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }
        else
        {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }
    return head;
}
// insertion at end using recursion
Node *end(int arr[], int ind, int size)
{
    if (ind == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[ind]);
    temp->next = end(arr, ind + 1, size);
    return temp;
}
// insertion at begin using recursion
Node *begin(int arr[], int ind, int size, Node *prev)
{
    if (ind == size)
    {
        return prev;
    }
    Node *temp = new Node(arr[ind]);
    temp->next = prev;
    return begin(arr, ind + 1, size, temp);
}
// insertion at given position
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
void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
Node *DeleteAtEnd(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return nullptr;
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}
Node *DeleteAtBegin(Node *head)
{
    if (head == NULL || head->next == NULL)
        return nullptr;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node *DeleteAtGivenIndex(Node *head, int k)
{
    if (head == nullptr)
        return nullptr;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == (k - 1))
        {
            Node *dump = temp->next;
            temp->next = temp->next->next;
            delete dump;
            break;
        }
        temp = temp->next;
    }
    return head;
}
Node *DeleteGivenValue(Node *head, int val)
{
    if (head == nullptr)
        return nullptr;
    if (head->data == val)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node *temp = head;
    Node *prev = nullptr;
    while (temp->data != val && temp != nullptr)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp)
    {
        prev->next = temp->next;
        free(temp);
    }
    else cout<<"Value Not Present"<<endl;
    return head;
}
int main()
{
    int arr[] = {2, 4, 6, 10, 23, 56, 77, 35, 88};
    int size = 9;
    Node *head = NULL;
    // head = insertionAtBegin(arr, size);
    // printLinkedList(head);
    // head = NULL;
    // cout << endl;
    // head = insertionAtEnd(arr, size);
    // printLinkedList(head);
    // head = NULL;
    // cout << endl;
    // head = end(arr, 0, size);
    // printLinkedList(head);
    // head = NULL;
    // cout << endl;
    // head = begin(arr, 0, size, NULL);
    // printLinkedList(head);
    // cout << endl;
    // // Node h1 = head;
    // head = insertAtGivenIndex(5, 8, head);
    // printLinkedList(head);
    head = insertionAtEnd(arr, size);
    printLinkedList(head);
    cout << endl;
    // head = DeleteAtEnd(head);
    // printLinkedList(head);
    // cout << endl;
    // head = DeleteAtBegin(head);
    // printLinkedList(head);
    // cout << endl;
    // head = DeleteAtGivenIndex(head, 7);
    // printLinkedList(head);
    head = DeleteGivenValue(head, 2);
    printLinkedList(head);
    return 0;
}
