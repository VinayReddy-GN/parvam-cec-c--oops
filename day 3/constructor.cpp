#include<iostream>
using namespace std;

class Calculate{
    public:
        //member data
        int num1,num2;
        float res;
        //declare the constructor it also called a default constructor
        // Calculate(){
        //     num1 = 5;
        //     num2 =10;
        // }

        //member function
        void showoutput(){
            cout << "Addition:" << num1 + num2 << endl;
            cout << "Subtraction:" << num1 - num2 << endl;
            cout << "Multiplication:" << num1 * num2 << endl;
            cout << "Quotient:" << num1 / num2 << endl;
            cout << "Remender:" << num1 % num2 << endl;

        }

};


int main(){
    Calculate c1; //object
    // ASSIGNING THE VALUE TO THE DATA MEMBRANE
    Calculate c2;
    c2.num1 = 25;
    c2.num2 = 30;
    c1.showoutput();
    c2.showoutput();
}