#include<iostream>
using namespace std;

class calculate{
    public:
        int result;
        //function overloading-complile -time polymorphism

        int sum(int num  ){ // sum function expecting 1 parameter(int)
            result = num+num;
        }

        int sum(int num1,int num2  ){// sum function expecting 2 parameter(int)
            result = num1+num2;
        }
        
        int sum(float n1,float n2  ){// sum function expecting 2 parameter(int)
            float(result) = n1 +n2;
            return result;
        }


};

int main(){
    int number1 , number2;
    float decimal1 , decimal2;

    cout << "enter any two integer:"<<endl;
    cin>> decimal1 >> decimal2;
    
    cout << " enter any two decimal number:";
    cin >> decimal1 >> decimal2;

    calculate cal1;
    cout << "adding the number itself:" << cal1.sum(number1) << endl;
    cout << "adding the 2 integers:" << cal1.sum(number1 , number2) << endl;
    cout << "adding the 2 decimals:" << cal1.sum(decimal1 , decimal2) << endl;
}