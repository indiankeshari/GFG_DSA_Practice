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
        next = NULL;
        prev = NULL;
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
    head->prev = temp;
    return temp;
}

Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }

    return prev->prev;
}

int main()
{
    Node *head = NULL;
    head = insertBegin(head, 11);
    head = insertBegin(head, 21);
    head = insertBegin(head, 31);
    head = insertBegin(head, 48);
    display(head);
    head = reverse(head);
    display(head);

    return 0;
}