#include<iostream>
using namespace std;

class Teacher{
    private: //by default all the data members of the class come under private access specifiers
        string branch;
    public: 
        string name, qualification;
        int experience;

        Teacher(){
            branch = "AIML";
            name = "yyyy";
            qualification = "m tech";
            experience = 5;
        }

        
        void setdata(string tname , string tbranch , string tqual , int exp){ //setter
            name = tname;
            branch = tbranch;
            qualification = tqual;
            experience = exp;

        }

        Teacher(string teachername , string teacherbranch , string teacherqual , int teacherexp){
            setdata( teachername ,  teacherbranch ,  teacherqual ,  teacherexp);
            cout << "welcome" << name << "to" << branch << "." << endl;
            cout << "yoou'r graduated with," << qualification << "degree . and you'r" << experience << "year of experience" << endl;
        }
        // syntax for copy constructor : constructor(reference construction address of the object)

        Teacher(Teacher &t){
            name =t.name;
            branch = t.branch;
            qualification = t.qualification;
            experience = t.experience;

        }

        void getdata(){ //getter
            cout << "welcome" << name << "to" << branch << "." << endl;
            cout << "yoou'r graduated with," << qualification << "degree . and you'r" << experience << "year of experience" << endl;
        }

        ~Teacher(){ //destructor state
            cout << " object work is done , clearing the memory!"<< endl;
        }

};

int main(){
    string n, q ,b ;
    int e ;

    Teacher teacher1; // object created and invokked the default constructor

    cout << " enter your name , qualification, branch and experience: ";
    cin >> n >> q >> b >> e ;

    Teacher teacher2(n,q,b,e);  

    Teacher teacher3 = teacher2;
    teacher3.getdata();

}