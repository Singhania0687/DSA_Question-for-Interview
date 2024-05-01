# include<iostream>
using namespace std;
template <typename T>
void SwapVal(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a=10,b=20;
    SwapVal(a,b);
    cout<<"a="<<a<<" b="<<b<<endl;
    float c=10.5,d=20.5;
    SwapVal(c, d);
    cout<<"c="<<c<<" d="<<d<<endl;
}