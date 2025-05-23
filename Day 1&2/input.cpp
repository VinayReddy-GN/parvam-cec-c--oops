#include<iostream>
using namespace std;

void main(){
    string first_name,college,branch;
    char sem;
    int age;

    cout<<"enter your name:";
    cin>> first_name;
    cout<<"enter your college name:";
    cin>>college;
    cout<<"enter your branch name:";
    cin>>branch;
    cout<<"enter the age:";
    cin>>age;
    cout<<"enter your semster:";
    cin>>sem;

    cout<<"your name is" << first_name <<", you're"<<age <<"years old.you're studing in"<<college<<"college in"<<branch <<"branch in" <<sem <<"semester";
}