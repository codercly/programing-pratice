#include<iostream>
#include<unordered_set>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

void insert(Node * & lst, int value){
    Node* new_node = new Node();
    new_node -> data = value;
    new_node -> next = lst;
    lst = new_node;
}

void printList(Node * lst){
    while (lst != NULL)
    {
        cout << lst->data << " ";
        lst = lst -> next;
    }

    cout << endl;
    
}



Node* search(Node * lst, int value){

    while (lst != NULL && lst -> data != value){
        lst = lst -> next;
    }

    return lst;
    
}

void deleteNode(Node * lst, int value){
    Node * temp = lst;
    Node * prev = NULL;

    if(temp != NULL && temp -> data == value){
        lst = temp -> next;
        delete temp;
        return;
    }

    else {
        while (temp != NULL && temp -> data != value){
            prev = temp;
            temp = temp -> next;
        }

        if(temp = NULL)
            return;

        prev -> next = temp -> next;
        delete temp;
        
    }

}

Node* deleteDup(Node* head){
    unordered_set<int> set;
    Node* current = head;
    Node* prev = nullptr;
    

    while(current != nullptr){
        if(set.count(current -> data) > 0){
            prev->next = current -> next;
            delete current;
            
        } else {
            set.insert(current->data);
            prev = current;
        }
        current = prev -> next;
    }
}



int main(){
    Node* head = NULL;
    insert(head, 7);
    insert(head, 10);
    insert(head, 10);
    insert(head, 50);
    insert(head, 20);
    insert(head, 50);
    insert(head, 60);

    printList(head);

    deleteDup(head);

    // cout << search(head, 7);
    //deleteNode(head, 50);

    printList(head);


}