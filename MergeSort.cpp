# include<iostream>
# include<vector>
using namespace std;
void Merge(vector<int>&v, int lb, int mid, int ub){
    int i=lb, j=mid+1;
  vector<int>b;
    while(i<=mid && j<=ub){
        if(v[i]<v[j]){
            b.push_back(v[i]);
            i++;
        }
        else{
           b.push_back(v[j]);
            j++;
        }
    }
 
        while(i<=mid){
           b.push_back(v[i]);
           ++i;
        }
  
        while(j<=ub){
           b.push_back(v[j]);
           ++j;
        }
    for(int i=0; i<b.size(); i++){
        v[lb+i]=b[i];
    }
}

void MergeSort(vector<int>&v,int lb,int ub){
    int mid=(lb+ub)/2;
    if(lb<ub){
        MergeSort(v, lb, mid);
        MergeSort(v, mid+1, ub);
        Merge(v, lb, mid, ub);
    }
    

}
void Merge(){

}
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(7);  
    v.push_back(2);
    v.push_back(3);
    v.push_back(9);
    v.push_back(5);
    v.push_back(6);
    int ub=v.size()-1;
    int lb=0;
    MergeSort(v,lb,ub);
    for(auto it:v){
        cout<<it<<" ";
    }
    //Merge(v, lb, mid, ub

}