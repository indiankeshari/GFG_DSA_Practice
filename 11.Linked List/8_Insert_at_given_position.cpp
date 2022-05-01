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

Node *insertPos(Node *head, int pos, int data)
{
    Node *temp = new Node(data);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for (int i = 1; i <= pos - 2 && curr != NULL; i++)
        curr = curr->next;
    if (curr == NULL)
        return head;
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = new Node(5);
    head->next = new Node(7);
    head->next->next = new Node(2);
    head->next->next->next = new Node(11);
    head = insertPos(head, 2, 90);
    display(head);

    return 0;
}