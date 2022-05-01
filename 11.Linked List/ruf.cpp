#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
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
}

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

Node *deleteHead(Node *head)
{
    if (head == NULL)
        return NULL;
    else
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }
}

int main()
{
    Node *head = new Node(13);
    head->next = new Node(10);
    head = insertBegin(head, 2);
    head = insertEnd(head, 7);
    head = deleteHead(head);
    head = deleteHead(head);
    display(head);

    return 0;
}