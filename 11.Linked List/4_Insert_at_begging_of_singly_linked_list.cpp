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

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
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
    Node *head = NULL;
    int t;
    cout << "How Many Numbers You Want to Insert : ";
    cin >> t;
    cout << "Enter " << t << " Numbers You Want to Insert at begin" << endl;
    while (t--)
    {
        int n;
        cin >> n;
        head = insertBegin(head, n);
    }
    // head = insertBegin(head, 30);
    // head = insertBegin(head, 20);
    // head = insertBegin(head, 10);
    display(head);

    return 0;
}