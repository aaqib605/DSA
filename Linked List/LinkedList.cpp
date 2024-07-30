#include <bits/stdc++.h>

int main()
{
    class Node
    {
    public:
        int data;
        Node *next;

        Node(int data, Node *next)
        {
            this->data = data;
            this->next = next;
        }
    };

    Node *head = new Node(10, nullptr);

    cout << head << endl;
    cout << head->data << head->next << endl;
    return 0;
}