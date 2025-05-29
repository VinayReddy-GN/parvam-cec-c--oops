#include<iostream>
using namespace std;

int main(){
    int age;
    int *ptrage = &age; // adress of age(pointer referencing)

    string name;
    string *nameptr = &name;
    cout << "enter your name and age:";
    cin >>  name >> age;
    // *ptrage & *nameptr - pointer dereferencing

    cout << "your name is " << (*nameptr) << ",you'r " << (*ptrage) << " years old." << endl;
    cout << "the adress of name is stored in pinter(nameptr): " << nameptr << endl;
    cout << "the adress of name is stored in pinter(ptrage): " << ptrage << endl;


    int*num1 = new int(5); // dynamic memory allocation
    // the reference is value is not needed for assign the adress to the pointer we can use new keyword
    cout << "the value within the pointer num1: " << (*num1) <<endl;
    int size, array1[size];

    int *arr = new int[size];

    cout<< "enter the size of an array : "<< endl;
    cin >> size;

    cout << " enter the" << size << " elements into an array:" << endl;
    for(int i=0; i< size; i++){
        cin >> arr[i];
    }

    cout << " the array contains " << size << " elements,they are:" <<endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << endl;
    }

}