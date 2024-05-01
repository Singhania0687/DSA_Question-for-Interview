# include<iostream>
# include<vector>
using namespace std;
class Solution {
public:
void combi(vector<int>& candidates, int target,vector<int>&ds,vector<vector<int> > &ans,int idx){
    if(idx==candidates.size())
           {
            if(target==0)
            ans.push_back(ds);
            return ;
           }
           if(candidates[idx]<=target)
           {
            ds.push_back(candidates[idx]);
            combi(candidates,target-candidates[idx],ds,ans,idx);
            ds.pop_back();
           }
           combi(candidates,target,ds,ans,idx+1);

}
    vector<vector<int> > combinationSum(vector<int>& candidates, int target) {
        vector<vector<int> > ans;vector<int>ds;
        combi(candidates,target,ds,ans,0);
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    vector<vector<int> > ans=s.combinationSum(v, 7); 
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}