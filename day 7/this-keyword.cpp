#include<iostream>
using namespace std;

class name{
    private:
        string name;
    public:
        void setname(string n ){
            this -> name = n;
        }

        void showname(){
            cout << " your name is :"<< name << endl;
        }
};

int main(){
    string studentname;
    cout << "enter your name:";
    cin >> studentname;

    name name1;
    name1.setname(studentname);
    name1.showname();

}