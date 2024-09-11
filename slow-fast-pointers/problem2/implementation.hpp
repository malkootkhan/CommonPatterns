#include <iostream>

struct Node 
{
    int data;
    struct Node*next;
    Node(int d):data(d),next(nullptr) {}
};

class Linkedlist
{
private:    
    struct Node* head;
    struct Node* tail;
public:
    Linkedlist():head(nullptr),tail(nullptr) {}
    void insert(int data);
    void del_front();
    void del_back();
    void dispList();
    int getMiddleEle();

};

void Linkedlist::insert(int data)
{
    struct Node* tmp = this->head;
    struct Node* newNode = new Node(data);
    if(!tmp){
        this->head = newNode;
        this->tail = newNode;
        return;
    } 
    this->tail->next = newNode;
    this->tail = newNode;
}
void Linkedlist::del_front()
{
   struct Node* node = this->head;
   if(!node)
     return;
    
    node = head->next;
    delete(this->head);
    this->head = node;
}
void Linkedlist::del_back()
{
    if(!this->head)
        return;
    if(head == tail) {
        delete(tail);
        head= nullptr;
        tail = nullptr;
        return;
    }

    struct Node* t = head;

    while(t->next != this->tail)
        t = t->next;

    delete(tail);
    tail = t;
    tail->next = nullptr;
}
void Linkedlist::dispList()
{
    struct Node* tmp = this->head;
    while(tmp)
    {
        std::cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    std::cout<<std::endl;
}

int Linkedlist::getMiddleEle()
{
    if(!this->head)
        return 0;
    if(this->head == this->tail)
        return this->head->data;

    /*fast and slow pointers*/
    struct Node* slow = this->head;
    struct Node* fast = this->head->next;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}
