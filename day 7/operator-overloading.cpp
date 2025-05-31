#include<iostream>
using namespace std;

class increment{
    private:
        int number,value,value1;
    public:
        void setnumber(int num){
            number = num;
        }

        //syntax for operator overloading
        // return type operator symbol(parameter){parameter is optional}
        // unary operator overloading
        void operator ++(){
            value = number+5;
        }
        void operator --(){
            value1 = number - 5;
        }
        void showvalue(){
            cout << "before incrementing:" << number << endl;
            cout << "after incrementing:" << value <<endl;
            cout << "before incrementing:" << number <<endl;
            cout << "after incrementing:" << value <<endl;
        }
};

int main(){
    int n;

    cout << "enter any number for incrementing its value by 1:";
    cin >> n;
    increment num1;

    num1.setnumber(n);
    ++num1;
    --num1;
    num1.showvalue();

    cout << "number after incrementing: " << ++n << endl;
    cout << "number after decrementing: " << --n << endl;


}