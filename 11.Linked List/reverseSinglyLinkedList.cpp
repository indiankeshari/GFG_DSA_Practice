//! Not Completed Yet

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

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *insertBegin(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;
    temp->next = head;
    return temp;
}

Node *reverse(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return head;
    Node *temp = head;
    Node *curr = head;
    while (curr != NULL)
    {
        curr = curr->next;
        // head->next = curr;
        // curr = head;
        // head = temp;
        // temp = temp->next;
    }
    head = curr;
    

    return head;
}

int main()
{
    Node *head = NULL;
    head = insertBegin(head, 11);
    head = insertBegin(head, 21);
    head = insertBegin(head, 31);
    display(head);
    head = reverse(head);
    display(head);

    return 0;
}