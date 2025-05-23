#include<iostream>
using namespace std;

class Company{
    private:
        string cin;
        int totalWorth=0;
    public:
        string gstNum,location;
        int numofEmp;
        //setter method

        void setDetails(string cinNum , int worth){
            cin=cinNum;
            totalWorth = worth;
        }

        //getter method
        void getDetails(string gstNumber){
            cout << "corporate Identity Number:" <<cin <<endl;
            cout << "total worth of the company:" <<totalWorth <<endl;
        }

        void getBasicDetails(); //delere the member function
};

//function defination outside the class
//syntax: return_type class_name :: member_function
void Company :: getBasicDetails(){ // scope resolution operator
    cout << " GST Number:" << gstNum <<endl;
    cout << " Location:" << location <<endl;
    cout << " Number of employs:" << numofEmp <<endl;
}

int main(){
    Company comp1;
    comp1.gstNum="12kjhgwd875";
    comp1.location="benglure";
    comp1.numofEmp=50;
    comp1.getBasicDetails();

    string cinNumber;
    int companyWorth;

    cinNumber = "1124hjh67";
    companyWorth = 5000;

    comp1.setDetails(cinNumber,companyWorth);
    comp1.getDetails(comp1.gstNum);
}

