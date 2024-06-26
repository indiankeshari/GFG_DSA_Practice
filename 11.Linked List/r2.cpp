#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265

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
    else
    {
        temp->next = head;
        head->prev = temp;
        return temp;
    }
}

Node *insertEnd(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->next == NULL)
        {
            curr->next = temp;
            temp->prev = curr;
            break;
        }
        curr = curr->next;
    }
    return head;
}

int main()
{
    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    display(head);

    return 0;
}