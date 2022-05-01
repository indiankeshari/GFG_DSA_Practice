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
        cout << (*head).data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int search(Node *head, int data)
{
    int i = 1;
    while (head != NULL)
    {
        if (head->data == data)
        {
            return i;
            break;
        }
        head = head->next;
        i++;
    }
    return -1;
}
int searchRecursive(Node *head, int data)
{
    if (head == NULL)
        return -1;
    if (head->data == data)
        return 1;

    int res = searchRecursive(head->next, data);
    if (res == -1)
        return -1;
    else
        return res + 1;
}

int main()
{
    Node *head = NULL;
    head = insertBegin(head, 1);
    head = insertBegin(head, 50);
    head = insertBegin(head, 5);
    head = insertBegin(head, 22);
    display(head);
    cout << 5 << " is at " << searchRecursive(head, 5) << endl;
    cout << 7 << " is at " << searchRecursive(head, 7) << endl;
    cout << 22 << " is at " << search(head, 22) << endl;
    cout << 1 << " is at " << search(head, 1) << endl;

    return 0;
}