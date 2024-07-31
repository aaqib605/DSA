#include <bits/stdc++.h>

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

Node *convertArrToLinkedList(int arr[], int size)
{
    Node *head = new Node(arr[0], nullptr);
    Node *mover = head;

    for (int i = 1; i < size; i++)
    {
        Node *temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void printLinkedList(Node *head)
{
    Node *temp = head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

Node *removeHead(Node *head)
{
    if (head == nullptr)
        return head;

    Node *temp = head;
    head = head->next;
    delete temp;

    return head;
}

int main()
{
    int arr[5] = {10, 15, 20, 25, 30};
    Node *head = convertArrToLinkedList(arr, 5);

    Node *newHead = removeHead(head);

    printLinkedList(newHead);
    return 0;
}