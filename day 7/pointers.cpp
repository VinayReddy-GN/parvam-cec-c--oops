#include<iostream>
using namespace std;

int main(){
    int a;
    //sytax for declaring the pointer:
    //data type *pomter_name
    //datatype of the ponter should be same as reference variable
    //assign the adrees to pointer:&variable_name
    //* refer to ponter variablr
    //& refer to thr address of the variable
    //ptr referds to the adress of the pointer
    //*ptr refer to the value of pointer
    int *ptr = &a;

    float decimal;
    float*f = &decimal;

    cout << "enter a value of a :";
    cin >> a;

    cout << "enter the decimal value:";

    cout << "value of a:" << &a << endl;
    cout << "adress of a:" << &a << endl;
    cout << "value of pointer(ptr):" << ptr << endl;
    cout << "adress ponted by ptr: " << &ptr << endl;
    cout << "value pointed by ptr: " << *ptr << endl;

    cout << "value of decimal:" << &decimal << endl;
    cout << "adress of decimal:" << &decimal << endl;
    cout << "value of pointer(ptr):" << f << endl;
    cout << "adress  by ptr: " << &f << endl;
    cout << "value ponted by ptr: " << *f << endl;
}
