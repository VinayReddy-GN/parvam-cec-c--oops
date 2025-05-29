#include<iostream>
using namespace std;

class name{
    private:
        string name , branch ;
        int sem;
        
    public:
        void setname(string n ){
            this -> name = n;
        }
        // as the parameter name and priivate number name is same
        // to 
        void setdetails(string branch , int sem){
            this->branch = branch;
            this->sem = sem;
        }

        void showname(){
            cout << " your name is :"<< name << endl;
        }
        void showdetails(){
            cout << "you'r from " << branch << " branch,and you'r studing in " << sem << "sem." << endl;
        }
};

int main(){
    string studentname , studentbranch ;
    int studentsem;
    cout << "enter your name, branch&sem:";
    cin >> studentname >> studentbranch >> studentsem;

    name name1;
    name1.setname(studentname);
    name1.showname();
    name1.setdetails(studentbranch , studentsem );
    name1.showdetails();

}