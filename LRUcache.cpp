// LRU CACHE
# include<iostream>
# include<map>
using namespace std;
class LRUCache {
public:
    struct Node{
        int key;int val;
        Node* next;Node* prev;
        Node(int key,int val){
            this->key=key;
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
    };
    map<int,Node*>mp;int cap;
    Node* head=new Node(-1,-1);
     Node* tail=new Node(-1,-1);
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;       
    }
    void Add(Node* newNode){
        Node* temp=head->next;
        newNode->next=temp;
        newNode->prev=head;
        head->next=newNode;
        temp->prev=newNode;

    }
    void Delete(Node* deleteNode){
         Node* prevv = deleteNode -> prev;
        Node* nextt = deleteNode -> next;
        prevv->next=nextt;
        nextt->prev=prevv;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            Node* resNode=mp[key];
            int ans=resNode->val;
            mp.erase(key);
            Delete(resNode);
            Add(resNode);
            mp[key]=head->next;
            return ans;
        }
        return -1;
        
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            Node* curr=mp[key];
            mp.erase(key);
            Delete(curr);
        }
        if(mp.size()==cap){
            mp.erase(tail->prev->key);
            Delete(tail->prev);
        }
        Add(new Node(key,value));
        mp[key]=head->next;
        
    }
};
int main(){
    LRUCache* obj = new LRUCache(2);
    obj->put(1,1);
    obj->put(2,2);
    cout<<obj->get(1)<<endl;
    obj->put(3,3);
    cout<<obj->get(2)<<endl;
    obj->put(4,4);
    cout<<obj->get(1)<<endl;
    cout<<obj->get(3)<<endl;
    cout<<obj->get(4)<<endl;
}