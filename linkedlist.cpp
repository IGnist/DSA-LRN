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
        this->next = NULL;
    }
};
void insertAtHead(Node *&Head, int d)
{
    Node *temp = new Node(d);
    temp->next = Head;
    Head = temp;
}
void insertAtTail(Node *&Tail, int d)
{
    Node *temp = new Node(d);
    Tail->next = temp;
    Tail = Tail->next;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertINMiddle(Node *&tail, Node *&head, int pos, int d)
{
    // starting
    if (pos == 1)
    {
        insertAtHead(head, d);
        return;
    }
    // middle
    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    Node *NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}
void NodeDelete(int pos, Node *&head,Node * &Tail)
{
    if (pos == 1)
    {
        // start node
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *Curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < pos)
        {
            prev = Curr;
            Curr = Curr->next;
            count++;
        }
        if (Curr->next == NULL)
        {
            prev->next = Curr->next;
            Curr->next = NULL;
            delete Curr;
            Tail->next=prev->next;
            Tail->data=prev->data;
            delete prev;
            return;

        }
        else{
        prev->next = Curr->next;
        Curr->next = NULL;
        delete Curr;
        }
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *Tail = node1;
    insertAtTail(Tail, 15);
    insertAtTail(Tail, 18);
    insertINMiddle(Tail, head, 3, 22);
    insertAtHead(head, 88);
    insertINMiddle(Tail, head, 1, 622);
    NodeDelete(3, head,Tail);

    print(head);
    cout << endl;
    cout << "Head:" << head->data << endl;
    cout << "Tail:" << Tail->data;
    return 0;
}