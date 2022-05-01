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

Node *deleteTail(Node *head)
{
    if (head == NULL)
        return NULL;
    else if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *curr = head;
        while (curr->next->next != NULL)
        {
            curr = curr->next;
        }
        delete curr->next;
        curr->next = NULL;
        return head;
    }
}

int main()
{
    Node *head = new Node(5);
    head = insertBegin(head, 6);
    head = insertBegin(head, 1);
    head = deleteTail(head);
    display(head);

    return 0;
}