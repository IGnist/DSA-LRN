#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertAtHead(Node *&Head, int d)
{
    Node *temp = new Node(d);
    temp->next = Head;
    temp->prev=NULL;
    Head->prev=temp;
    Head = temp;
}


void insertAtTail(Node *&Tail, int d)
{
    Node *temp = new Node(d);
    Tail->next = temp;
    temp->prev=Tail;
    Tail = temp;
    
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

void printback(Node * &tail)
{
    Node *temp = tail;
    while (temp->prev!= NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout<<temp->data;
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
    temp->next->prev=NodeToInsert;
    NodeToInsert->prev=temp;


    temp->next = NodeToInsert;
}
void NodeDelete(int pos, Node * &head,Node * &Tail)
{
    if (pos == 1)
    {
        // start node
        Node *temp = head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
        return;
    }
    else
    {
       Node *Curr = head;
        int count = 1;
        while (count < pos)
        {
            Curr = Curr->next;
            count++;
        }
        if (Curr->next == NULL)
        {
            // prev1->next = NULL;
            // prev1->prev=Curr->prev->prev;
            // prev1->data=Curr->prev->data;
            Tail->data=Curr->prev->data;
            Tail->prev=Curr->prev->prev;
            Tail->next=NULL;
            Tail=Tail->prev;
            delete Curr;
            return;

        }
        else{
        //prev1->next = Curr->next;
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
    insertAtHead(head, 88);
    insertAtHead(head, 25);
    insertAtHead(head, 66);
    insertAtHead(head, 75);
    insertAtHead(head, 125);
    insertAtTail(Tail, 15);
    insertAtTail(Tail, 25);
    insertINMiddle(Tail, head, 3, 622);
    insertINMiddle(Tail, head, 1, 1);
    insertINMiddle(Tail, head, 6, 1622);
    insertINMiddle(Tail, head,12, 100);
    NodeDelete(1, head,Tail);
    NodeDelete(1, head,Tail);
    NodeDelete(1, head,Tail);
    NodeDelete(9, head,Tail);
    NodeDelete(8, head,Tail);
    NodeDelete(7, head,Tail);
    NodeDelete(6, head,Tail);

    print(head);
    cout<<endl;
    printback(Tail);
     cout << endl;
    cout << "Head:" << head->data << endl;
    cout << "Tail:" << Tail->data;

    return 0;
}