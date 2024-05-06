# include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(){
        next==nullptr;
    }
    Node(int val){
        data=val;
        next=nullptr;
    }

};
void display(Node* root){
    Node* curr=root;
    while(curr){
        cout<<curr->data<<" "<<curr<<endl;
        curr=curr->next;
    }
    cout<<"curr at last "<<curr <<"----------"<<endl;
}
void AddAtBeginning(Node* &root,int p){
    Node* curr=new Node(p);
    curr->next=root;
     root=curr;
}
void DeleteAtBeginning(Node* &root){
    Node* temp=root;
    root=root->next;
    delete temp;
}
void AddAtEnd(Node* &root, int p){
  if(!root){
      root=new Node(p);
      return;
  }
    Node* temp=root;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=new Node(p);
}
void DeleteAtEnd(Node* &root){
    if(root==nullptr) return;
    Node* temp=root;
    while( temp->next->next){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
}
void AddAtMid(Node* &root,int p){
    if(!root){
        root=new Node(p);
        return;
    }
   Node* slow=root;Node* fast=root;
   while(fast->next && fast->next->next){
       slow=slow->next;
       fast=fast->next->next;
   }
   Node* temp=new Node(p);
   temp->next=slow->next;
   slow->next=temp;

}
void DeleteAtMid(Node* &root){
       if(root==nullptr) 
                return;
            Node* slow=root;
            Node* fast=root;
               while(fast->next && fast->next->next){
                   slow=slow->next;
                   fast=fast->next->next;
               }
               Node* curr=root;
               while(curr->next!=slow){
                curr=curr->next;
               }
               Node* temp=slow;
               curr->next=slow->next;
               delete temp;

}
void InsertAtKthPlace(Node* &root,int p,int k){
    if(root==nullptr)
    {
        root=new Node(p);
        return;
    }
    if(k<=1){
        Node* temp=new Node(p);
        temp->next=root;
        root=temp;
        return;
    }
    --k;
    Node* curr=root;
    while(k!=1 && curr){
        --k;
        curr=curr->next;
    }
    Node* temp=new Node(p);
    temp->next=curr->next;
    curr->next=temp;
    return;

}
void DeleteAtKthPlace(Node* &root, int k){
    if(root ==nullptr)
          return ;
          if(k==1)
          {
            Node* curr=root;
            root=root->next;
            delete curr;
            return;
          }
           --k;
    Node* curr=root;
    while(k!=1 && curr){
        --k;
        curr=curr->next;
    }
  Node* temp=curr->next;
  curr->next=temp->next;
  delete temp;

}
void Reverse(Node* &root){
    if(root==nullptr) return;
    Node* curr=root;
    Node* prev=nullptr;
    Node* next=nullptr;
    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    root=prev;

}
int main(){
    Node* root=new Node(10);
    Node* curr=root;
    curr->next=new Node(20);
    curr->next->next=new Node(30);
    curr->next->next->next=new Node(40);
      display(root);
      cout<<"Add at beginning"<<endl;
      AddAtBeginning(root,60);
      display(root);
      cout<<"Delete at beginning"<<endl;
      DeleteAtBeginning(root);
      display(root);
      cout<<"Add at end"<<endl;
      AddAtEnd(root, 50);
      display(root);
      cout<<"Delete at end"<<endl;
      DeleteAtEnd(root);
      display(root);
      cout<<"Add at mid"<<endl;
      AddAtMid(root, 25);
      display(root);
      cout<<"Delete at mid"<<endl;
      DeleteAtMid(root);
      display(root);
      cout<<"Insertion at kth "<<endl;
      InsertAtKthPlace(root,5,1);
      display(root);
      InsertAtKthPlace(root,67,3);
      display(root);
      cout<<"Deletion at kth "<<endl;
      DeleteAtKthPlace(root, 3);
      display(root);
      cout<<"Reverse "<<endl;
      Reverse(root);
      display(root);

}