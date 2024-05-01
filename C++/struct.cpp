# include<iostream>
using namespace std;
struct node{
   
    private:
    int cal(int r){
        return r*r;
    }
    public:
    int calculate(int r){
        return cal(r);
    }
    
};
int main(){
    node n;
    cout<<n.calculate(5);
}