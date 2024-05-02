/*Given an array of integers arr of even length n and an integer k.

We want to divide the array into exactly n / 2 pairs such that the sum of each pair is divisible by k.

Return true If you can find a way to do that or false otherwise.

*/
# include<iostream>
# include<vector>
# include<map>
using namespace std;
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        map<int,int>mp;
        for(int i=0;i<arr.size();++i)
        {   int r=((arr[i]%k)+k)%k;
            mp[r]++;
        }
        for(auto it:mp){
            if(it.first==0 )
                  {  
                    if( mp[it.first]%2==1)
                    return false; 
                    }
                    else{
                 if(mp.find(k-it.first)==mp.end())
                      return false;
                      else if(mp[it.first]!=mp[k-it.first])
                      return false; }    
        }
         return true;
    }
};
int main(){
    Solution obj;
    vector<int>arr={1,2,3,4,5,10,6,7,8,9};
    int k=5;
    cout<<obj.canArrange(arr,k);
    return 0;
}
// Time complexity: O(n)
// Space complexity: O(n)
// where n is the size of the array