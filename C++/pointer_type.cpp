# include<iostream>
# include<memory>
using namespace std;
int main(){
    unique_ptr<int>p1(new int);
    *p1=10;
    cout<<p1<<endl;
    shared_ptr<int>p2(new int);
    *p2=20;
    cout<<p2<<endl;

}

/*Advantages of Smart Pointers:
Easily manage ownership of resources, ensuring that resources are properly released when no longer needed.
Automatically manage memory allocation and deallocation, reducing the risk of memory leaks.
Provide exception safety, ensuring that resources are properly released even in the presence of exceptions.
Help prevent common mistakes associated with manual memory management, such as double deletion and dangling pointers.
Best Practices:
Prefer smart pointers over raw pointers whenever possible to improve code safety and maintainability.
Use std::unique_ptr when ownership is exclusive, and std::shared_ptr when ownership needs to be shared.
Avoid circular references by using std::weak_ptr to break the reference cycle when necessary.*/