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

bool checkIfPresent(Node *head, int num)
{
    Node *temp = head;

    while (temp)
    {
        if (temp->data == num)
            return true;
        temp = temp->next;
    }

    return false;
}

int main()
{
    int arr[5] = {10, 15, 20, 25, 30};
    Node *head = convertArrToLinkedList(arr, 5);

    bool isPresent = checkIfPresent(head, 20);

    cout << isPresent << endl; // true
    return 0;
}