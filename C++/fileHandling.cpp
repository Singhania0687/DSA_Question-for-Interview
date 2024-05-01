# include<iostream>
# include<fstream>
using namespace std;
void writeTofile(string st){
    ofstream file;
    file.open("sample.txt");
    file<<st;
    file.close();
}
void readFromFile(){
    ifstream file;
    file.open("sample.txt");
    string st;
    getline(file,st);
    cout<<st;
    file.close();
}
int main(){
    string st = "Harry is a good boy. He is not having a good marks";
    writeTofile(st);
    readFromFile();
    return 0;
}