#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

void Print(Node *head)
{
    while (head != 0)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

void insertAtHead(Node **head, int _value)

{
    Node *newNode = new Node();
    newNode->value = _value;
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(Node **head, int _value)
{
    Node *newNode = new Node();
    newNode->value = _value;
    newNode->next = nullptr;
    Node *current = *head;
    if (head == nullptr)
    {
        *head = newNode;
        return;
    }
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
}

void insertAtPosition(Node *&head, int _value, int position)
{
    Node *newNode = new Node();
    newNode->value = _value;
    Node *temp = head;
    int count = 1;
    while (count < position)
    {
        temp = temp->next;
        count++;
    }

    Node *tempNext;
    tempNext = temp->next;
    temp->next = newNode;
    newNode->next = tempNext;
}

void deleteAtHead(Node *&head)
{
    head = head->next;
}

void deleteAtEnd(Node *&head)
{
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = nullptr;
}
void deleteAtPosition(Node *&head, int position)
{
    int count = 1;
    Node *temp;
    temp = head;
    Node *removeNext;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    removeNext = temp->next->next;
    temp->next = removeNext;
}
int main()
{

    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->value = 1;
    second->value = 2;
    third->value = 3;

    head->next = second;
    second->next = third;
    third->next = nullptr;

    insertAtHead(&head, 5);
    insertAtEnd(&head, 10);
    Print(head);
    insertAtPosition(head, 25, 3);
    Print(head);
    deleteAtHead(head);
    Print(head);
    deleteAtEnd(head);
    Print(head);
    deleteAtPosition(head, 3);
    Print(head);

    return 0;
}