#include<iostream>
using namespace std;

class base{
    public:
        void showbase(){
            cout << "base member function has been called!" << endl;
        }

};

class derived : public base{
    public:
        void showbase(){  //funtion overloading
            cout << " derived member function has been called!"  << endl;
            // sytax: base-clean-name :: member function
            base :: showbase(); //calling the member of base class using scope resdolution operator
        }
};
class animal{//derived class
    public:
        void makesound(){
            cout << "animal makes some sound!:" << endl;
        }
};
class dog : public animal{ // derived class
    public:
        void makesound(){//function overriding (same member function name)
            animal :: makesound();
            cout << "dog barks!"<< endl;
        }
};
class cat : public animal{
    public:
        void makesound(){ // function overloading
            cout << "cat meows!"<< endl;
        }
};

int main(){
    //base b1;
    //b1.showbase();

    derived d1;
    d1.showbase();

    dog dog1;
    dog1.makesound();

    cat cat1;
    cat1.makesound();
}