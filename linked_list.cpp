#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *next;
};

node * head = NULL;

void add(int data){
    node * new_node = new node;
    new_node->data=data;
    new_node->next=NULL;

    if(head==NULL){
        head=new_node;
    }
    else{
        node * runner = head;
        while(runner->next!=NULL)
            runner=runner->next;
        runner->next=new_node;
    }
    cout<<"Node inserted \n";
}

void delll(int val){
    node * temp=head;
    node * prev=temp;
    if(temp->data==val){
        // delete head node 
        head=temp->next;
    }
    else{
        while(temp->data!=val){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
    }
    free(temp);
    free(prev);
    cout<<"Deleted\n";
}

void delduplicates(){
    node * curr = head;
    node * prev=curr;
    unordered_set<int>s;

    while(curr){
        if(s.find(curr->data)!=s.end()){
            // node exist delete that node
            prev->next=curr->next;
        }
        else{
            s.insert(curr->data);
            prev=curr;
        }
        curr= curr->next;
    }
}

void printll(){
    node * runner = head;
    while(runner){
        cout<<runner->data<<"->";
        runner=runner->next;
    }
    cout<<endl;
}

int main(){
    add(3);
    add(4);
    add(5);
    add(3);
    add(7);
    add(4);
    add(7);
    printll();
    //delll(3);
    delduplicates();
    printll();
    return 0;
}