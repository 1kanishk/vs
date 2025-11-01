#include <bits/stdc++.h>
using namespace std;
//                                                                       DOUBLY LINKED LIST
class node{
    public:
    int data;
    node *next;
    node* prev;

    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }




};

void insertatstart(node* &head,int val){ // INSERT AT START
    node* temp = new node(val);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertattail(node* &tail,int val){ // INSERT AT END
    node* temp = new node(val);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;

}

void insertatposition(node* &head,node* &tail,int pos,int val){
    
    //insert at start
    if (pos == 1 || head == nullptr) {
        insertatstart(head,val);
        return;
    }
    
    node* temp = head;
    int ct = 1;

    while(ct < pos - 1)
    {
        temp = temp->next;
        ct++;
    }

    //insert at last position
    if(temp->next == NULL){
        insertattail(tail,val);
        return;
    }

    node* newnode = new node(val); // INSERT AT SPECIFIC POSITION
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
    
}

void print(node* &head){ // TRAVERSE
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main()
{
    node* node1 = new node(10);

    node* head = node1;
    node* tail = node1;

    insertatstart(head,5);
    insertattail(tail,15);
    insertatposition(head,tail,3,50);

    print(head);



    return 0;
}