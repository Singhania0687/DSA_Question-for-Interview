# include<iostream>
# include <vector>
using namespace std;
void quickSort(vector<int>&v,int low,int high){
    if(low<high){
        int pivot = v[low];
        int i=low+1;
        for(int j=low+1; j<=high; j++){
            if(v[j]<pivot){
                swap(v[i], v[j]);
                ++i;}
        }
        swap(v[i-1], v[low]);
        quickSort(v, low, i-1);
        quickSort(v, i+1, high);
    }

}
int main(){
    vector<int>v;
    v.push_back(91);
    v.push_back(2);
    v.push_back(31);
    v.push_back(14);
    v.push_back(5);
    v.push_back(16);
    v.push_back(7);
    v.push_back(82);
    quickSort(v,0,v.size()-1);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}
