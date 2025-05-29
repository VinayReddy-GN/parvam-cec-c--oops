#include<iostream>
using namespace std;

class employee{
    private:
        string employeeid , employeename;
        int experience ;
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

class skill : public employee{
    private:
        int skillcount;
        string skills[10];
    public:
        void setskills(int count){
            skillcount = count;
            cout << "enter the " << count << "tecnologies you're familiar with:" << endl;
            for(int i=0; i<count; i++){
                cout << "skill" << i+1 << ":"<<endl;
                cin >> skills[i];
            }
        }
        void showskills(){
            cout << "skills know: " << endl;
            for(int i=0; i< skillcount ; i++){
                cout << "-" << skills[i] << endl;
            }
        }
};

int main(){
    string emp_name, emp_id;
    int emp_exp , skill_count;
    float emp_salary;

    cout << "enter the following details of the employee : " << endl;
    cout << "employee id, name years of experience and salary : " << endl;
    cin >> emp_id , emp_name , emp_exp , emp_salary;

    skill s1;
    skill * emp1 = &s1;

    s1.adddetails(emp_id , emp_name , emp_exp , emp_salary);
    s1.showdetails();

    cout << "enter the number of tecnologies you're familar with :  " << endl;
    cin >> skill_count;

    emp1->setskills(skill_count);
    emp1->showskills();
}