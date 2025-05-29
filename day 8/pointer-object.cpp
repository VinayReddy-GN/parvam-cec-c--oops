#include<iostream>
using namespace std;

class employee{
    private:
        string employeeid , employeename;
        int experience;
        float salary;

    public:
        void adddetails(string id , string name , int exp , float salary){
            employeeid = id;
            employeename = name;
            experience = exp;
            this->salary = salary;
        }

        void showdetails(){
            cout << "the employee with name " << employeename << " bearing "<< employeeid << "have"
            << experience << "years of experioence and recive a salary of rs." << salary << "/-" << endl;
        }

};
int main(){
    string empname , empid;
    int empexp;
    float empsalary;

    cout << "enter your name , employee-id , years of experioence & salary : " ;
    cin >> empname >> empid >> empexp >> empsalary;

    employee emp1; //object created
    employee *empptr =  &emp1; // pointer is pointing/refferencing to the objecty


    (*empptr).adddetails(empid,empname,empexp,empsalary); //using the pointer assign the value the object
    (*empptr).showdetails();
//using thwe pointerwe are assiging the value tom the object using pointer dereferencing & arrow operator
    empptr->adddetails(empid,empname,empexp,empsalary);
    empptr->showdetails();
    // wmp1.adddetails <==> (*ptr).adddetails <==>< empptr -> add details
    //syntax : classname *pointer_name = new classname
    employee*ptremp = new employee; //dynamicalli allocating memory for the p[ointer object(no object reffered)
    ptremp->adddetails("pmp123","raju",300,000.0);
    ptremp->showdetails();
    //emp1.adddetails <==> (*empptr).adddetasils <==> empptr -> adddetails
}
