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

Node *insertBegin(Node *head, int data);

int main()
{
    Node *head = new Node(5);
    head->next = new Node(8);
    head->next->next = new Node(1);
    head->next->next->next = head;
    display(head);
    head = insertBegin(head, 22);
    head = insertBegin(head, 9);
    display(head);

    return 0;
}

Node *insertBegin(Node *head, int data)
{
    //* Efficient Solution
    //* Time Complexity = O(1)
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head->next = head;
        return temp;
    }
    temp->next = head->next;
    head->next = temp;
    int x = temp->data;
    temp->data = head->data;
    head->data = x;

    return head;
}
// Node *insertBegin(Node *head, int data)
// {
//     //! UnEfficient Solution
//     //! Time Complexity = O(length of linked list)
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
//     temp->next = head;
//     curr->next = temp;

//     return temp;
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