# include<iostream>
using namespace std;
void SubsequenceSum(int arr[],vector<int>&v,int idx,int sum,int k,int size,bool &t){
    if(idx == size){
       {
        if(sum==k && t){
            for(auto it:v){
                cout<<it<<" ";   
            }
             t=false;
            return;
        }
        else 
           return;
       }
    }
   v.push_back(arr[idx]);
    SubsequenceSum(arr,v , idx+1,sum+arr[idx],k,size,t);
    v.pop_back();
    SubsequenceSum(arr,v,idx+1,sum,k,size,t);
}
int main(){
    int arr[]={1,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    bool t=true;
    SubsequenceSum(arr,v,0,0,2,size,t);
    return 0;
}