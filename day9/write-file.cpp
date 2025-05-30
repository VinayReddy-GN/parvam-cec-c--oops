#include<iostream>
#include<fstream>
using namespace std;

class teacher{
    private:
        string name , branch;
        int age , experience;
    public:
        void setinfo(string n , string b , int a , int e){
            name = n;
            branch = b;
            age = a;
            experience = e;
        }
        void writetofile(){
            ofstream write("write.txt");
            write << "teacher details arte as fallows : "<< endl;
            write << "name : " << name << endl;
            write << "age : " << age << endl;
            write << "branch : " << branch << endl;
            write << "experience : " << experience << endl;
        }

};

int main(){
    string teacher_name , teacher_branch;
    int teacher_age , teacher_experience;

    cout << "enter the name , age , branch and experience : ";
    cin >> teacher_name >> teacher_age >> teacher_branch >> teacher_experience;

    teacher t1;
    t1.setinfo(teacher_name , teacher_branch, teacher_age , teacher_experience);
    t1.writetofile();

}