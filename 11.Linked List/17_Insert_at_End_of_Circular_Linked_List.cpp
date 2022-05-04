#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void display(Node *head);

Node *insertEnd(Node *head, Node *tail, int data);
Node *insertEnd(Node *head, int data);

int main()
{
    Node *tail = NULL;
    Node *head = NULL;
    head = new Node(5);
    tail = head;
    head->next = new Node(8);
    tail = head->next;
    head->next->next = new Node(1);
    tail = head->next->next;
    tail->next = head;
    display(head);
    // head = insertEnd(head, tail, 22);
    // head = insertEnd(head, tail, 9);
    // head = insertEnd(head, tail, 91);
    head = insertEnd(head, 22);
    head = insertEnd(head, 9);
    head = insertEnd(head, 91);
    display(head);

    return 0;
}

Node *insertEnd(Node *head, Node *tail, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head->next = head;
        return temp;
    }
    tail->next = temp;
    // temp->next = head;
    tail = tail->next;
    tail->next = head;

    return head;
}

Node *insertEnd(Node *head, int data)
{
    //* Efficient Solution
    //* Time Complexity = O(1)
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head->next = head;
        return temp;
    }
    int x = temp->data;
    temp->next = head->next;
    head->next = temp;
    temp->data = head->data;
    head->data = x;

    return head->next;
}
// Node *insertEnd(Node *head, int data)
// {
//! UnEfficient Solution
//! Time Complexity = O(length of circular linked list)
//     Node *temp = new Node(data);
//     if (head == NULL)
//     {
//         head->next = head;
//         return temp;
//     }
//     Node *curr = head;
//     while (curr->next != head)
//     {
//         curr = curr->next;
//     }
//     // temp->next = head;
//     curr->next = temp;
//     temp->next = head;

//     return head;
// }

void display(Node *head)
{
    //* Using do while loop
    if (head == NULL)
        return;
    Node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
    cout << endl;
}