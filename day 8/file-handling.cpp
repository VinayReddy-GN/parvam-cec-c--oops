#include<iostream>
#include<fstream>//header files for handling the files(read/write)
using namespace std;

int main(){
    //writing in the file
    ofstream out ("sample.txt");
    string name;
    int age;
    cout << "enter your name & age :";
    cin >> name >> age ;
    out << "hello" << name << "!" << endl;
    out << "you'r" << age << "years old!" << endl;
    out.close();

    ifstream read("abc.text");
    string line;
    cout << "file contais:" << line << endl;
    while(getline(read , line)){
    
    cout  << line << endl;
    }
    read.close();


}

