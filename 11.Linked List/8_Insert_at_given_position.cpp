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

Node *insert(Node *head, int pos, int key)
{
    Node *curr = head;
    Node *temp = new Node(35);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }
    temp->next = curr->next;
    curr = curr->next;
    while ()
    {
        
    }
}

int main()
{

    return 0;
}