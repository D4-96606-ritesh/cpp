#include<iostream>
using namespace std;
class Node{
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr; 
    }
    friend class LinkedList;
   
};
class LinkedList{
    Node *head;
    public:
    LinkedList(){
       head = nullptr;
    }
    void add_first(){
    int value;
        cout<<"Enter value to add at first: ";
        cin>>value;
        Node *newNode = new Node(value);
        if(head == nullptr)
        {
            head = newNode;
        }
        else{
              newNode->next = head;
              head = newNode;
        }
}

void add_last(){
         int value;
        cout<<"Enter value to add at last : ";
        cin>>value;
        Node *newNode = new Node(value);
        if(head == nullptr)
        {
          head = newNode;
        }
        else{
               Node *temp = head;
               while(temp->next != nullptr)
               {
                temp = temp->next;
               }
               temp->next = newNode;
        }
}
void display(){
                Node *temp  = head;

             while(temp->next != NULL)
                {
                    cout<<temp->data<<" -> ";
                    temp = temp->next;
                }
                  cout<<temp->data<<endl;
}
};

int main(){
        LinkedList l;
        l.add_first();
        l.add_first();
        l.add_first();
        l.display();
        l.add_last();
        l.display();
        
}