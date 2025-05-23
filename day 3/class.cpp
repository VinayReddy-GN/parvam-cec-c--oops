#include<iostream>
using namespace std;

//systax
//class class_name // class declaration
class Student {
    public:
    string name, college, branch;
    int sem;

    void show(){
        cout << "name:"<< name << endl;
        cout << "college:"<< college<< endl;
        cout << "branch:"<< branch<< endl;
        cout << "semester:"<< sem << endl;
    }

};

int main(){
    Student student1; // object creation
    student1.name="ram"; // assigning the value to the class
    student1.college="CEC";
    student1.branch="AIML";
    student1.sem=8;
    student1.show();
    Student student2; // object creation
    student2.name="ram"; // assigning the value to the class
    student2.college="CEC";
    student2.branch="iot";
    student2.sem=6;
    
    student2.show();
}

