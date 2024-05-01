# include<iostream>
using namespace std;
int main(){
    int a=4;
    int* ptr=&a;
    int* const ptr11=&a;
    cout<<"The address of a is "<<ptr11<<endl;
    int **ptr2=&ptr;
    cout<<ptr2<<endl;
    cout<<"The address of a is "<<ptr<<endl;
    cout<<"The value of a is "<<*ptr<<endl;
    cout<<&ptr<<endl;
    void *ptr1;
    float t=2.31;
    ptr1=&t;
    cout<<ptr1;
}