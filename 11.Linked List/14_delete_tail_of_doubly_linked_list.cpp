#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

void display(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

Node *insertBegin(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;
    head->prev = temp;
    temp->next = head;
    return temp;
}

Node *deleteTail(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }

    delete curr->next;
    curr->next = NULL;
    return head;
}

int main()
{
    Node *head = NULL;
    head = insertBegin(head, 5);
    head = insertBegin(head, 4);
    head = insertBegin(head, 3);
    head = insertBegin(head, 2);
    head = insertBegin(head, 0);
    display(head);
    head = deleteTail(head);
    head = deleteTail(head);
    display(head);

    return 0;
}