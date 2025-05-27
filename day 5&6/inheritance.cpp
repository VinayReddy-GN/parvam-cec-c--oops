#include<iostream>
using namespace std;

class parent{ // base class
    private:
        int net_worth;
    public:
        string family_name , family_head;
        int number_of_members;

        void setdata(int worth, string familyname, string familyhead, int member_count){
            net_worth = worth;
            family_head = family_name;
            family_head = familyhead;
            number_of_members = member_count;
        }

        int shownetworth(){ // getter
            return net_worth;
        }
        int getfamilyinfo(){ // getter
            cout << "i am from" << family_name << "family and my family head is" << family_head << "our family net worth is about"<<shownetworth() << endl;
        }

         
};
// sytax for deriving the derived class
// class drived name: accessibility mode base class name

// 1  by default:derived class uses private accessbility mode

// 2 if derived class used private aCCESSIBILITY MODE THAN BASE CLASS and member function of the base class will become private

// 3 if derived class used public aCCESSIBILITY MODE THAN BASE CLASS and member function of the base class will become public
// class child: 

class child : public parent{ //deriverd class
    public:
        string member_name;
        int age;

        void adddetails(string name, int person_age){ //member function
            member_name = name;
            age = person_age;

        }

        void getfamilydetails(){ //member function
           cout << "my name is "<< member_name << "and i'am " << age << "years old" << getfamilyinfo() << endl; // inheriting the base class

        }

};

int main(){
    string fname,fhead,cname;
    int childage,fworth, fmembers;

    cout <<  " enter your family name , family head , number of family members & net worth:";
    cin >> fname >> fhead >> fmembers >> fworth;

    parent p1;
    p1.family_name; 
    p1.setdata(fworth, fname, fhead, fmembers );
    p1.getfamilyinfo();

    cout << "enter name&age:";
    cin >> cname >> childage;

    child c1;
    //c1.family_head ; (as child class is derived with public accessility data)
    c1.family_head;
    c1.setdata(fworth , fname , fhead , fmembers );
    c1.adddetails(cname,childage);
    c1.getfamilydetails();

}