#include<iostream>
using namespace std;

void sayhello(){ //function declaration
    cout<< "hello!" <<endl;//function defination
}
int sayhi(string name){
    cout<< "hi,"<<name<<endl;
}
int greet(string fname , string lname,int age){ //funtion with different parameters
    cout<< "hi,"<<fname << " "<<lname << ",Age:"<< age <<endl;
}
int main(){
    string firstName, lastName, friendName;
    int Age;
    cout<< "enter your first name:";
    cin>>firstName;
    cout<< "enter your last name:";
    cin>>lastName;
    cout<< "enter your age:";
    cin>>Age;
    cout<< "enter your friend name:";
    cin>>friendName;
    sayhello();
    sayhi(firstName); //function call with arguments
    sayhi(friendName);
    greet(firstName,lastName,Age);
}