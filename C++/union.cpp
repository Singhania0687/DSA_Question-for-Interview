# include<iostream>
using namespace std;
union MyUnion {
    int intValue;
    float floatValue;
    double doubleValue;
};
int main()
{
MyUnion u;
u.intValue = 42;
u.floatValue = 3.14f;
cout <<sizeof(u)<<endl;
// vivek ji , kb tk payment ho jayega . jldi ho jata to supply fir s start kr deta . financial constraint k h karan mai supply nhi kr pa rha hu. ap jldi krwa dijiye na .
cout<<&u.intValue<<endl;
cout<<&u.floatValue<<endl;
cout << "Integer value: " << u.intValue << endl;
cout << "Float value: " << u.floatValue << endl;
}
