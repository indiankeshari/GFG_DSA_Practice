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

int main()
{
    Node *head = new Node(5);
    head->next = new Node(8);
    head->next->next = new Node(1);
    head->next->next->next = head;
    display(head);

    return 0;
}

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

// void display(Node *head)
// {
//* Using while loop
//     if (head == NULL)
//         return;
//     Node *curr = head;
//     while (curr->next != head)
//     {
//         cout << curr->data << " ";
//         curr = curr->next;
//     }
//     cout << curr->data << endl;
// }
// void display(Node *head)
// {
//* Using for loop
//     if (head == NULL)
//         return;
//     // Node *curr = head;
//     cout << head->data << " ";
//     for (Node *curr = head->next; curr != head; curr = curr->next)
//         cout << curr->data << " ";
//     cout << endl;
// }
