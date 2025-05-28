#include<iostream>
using namespace std;

class complex{
    int real , imaginary; // private member 
    public:
        complex(){  //default constructor
            real = 0;
            imaginary = 0;
        }
        complex(int r , int i){ //parameterized constructor
            real = r;
            imaginary = i;
        }

        //binary operator overloading

        complex operator +(const complex &c){
            complex temp;
            temp.real = real + c.real;
            temp.imaginary = imaginary + c.imaginary;
            cout << " first number :" << real << "+" << imaginary << "i" << endl;
            cout << " second number :" << c.real << "+" << c.imaginary << "i" << endl;
            return temp;
        }
        complex operator -(const complex &c){
            complex temp;
            temp.real = real - c.real;
            temp.imaginary = imaginary - c.imaginary;
            cout << " first number :" << real << "-" << imaginary << "i" << endl;
            cout << " second number :" << c.real << "-" << c.imaginary << "i" << endl;
            return temp;
        }

        void showsum(){
            cout << " sum of two complex number:" << real << "+" << imaginary << "i" << endl;
        }
        void showdifference(){
            cout << " difference of two complex number:" << real << "-" << imaginary << "i" << endl;
        }
};

int main(){
    int r1 , r2 , i1 , i2 ;
    cout << " enter the first complex number(real number and imaginary number: eg. 5 +3i ):"<< endl;
    cin >> r1 >> i1;
    cout << " enter the second complex number(real number and imaginary number: eg. 10 +6i ):"<< endl;
    cin >> r2 >> i2;

    complex comp1(r1,i1);
    complex comp2(r2,i2);

    complex sum = comp1 + comp2;
    complex diff = comp1 - comp2;

    cout << " first complex number:" << "+" << i1 << "i" << endl;
    cout << " second complex number:" << "+" << i2 << "i" << endl;

    sum.showsum();
    sum.showdifference();
}