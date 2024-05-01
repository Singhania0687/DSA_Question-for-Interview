# include<iostream>
using namespace std;
enum class Color{
    red,
    green,
    blue
};
int main(){
    Color c=Color::blue;
    if(c==Color::red)
    cout<<"red";
    else if(c==Color::green)
    cout<<"green";
    else if(c==Color::blue)
    cout<<"blue";
    return 0;

}