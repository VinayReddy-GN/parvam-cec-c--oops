#include<iostream>
using namespace std;

class vechile{ //base class
    private:
        string riding_mode;
       
    public:
         void setmode(string mode){
            riding_mode = mode;
         }
         string usemode(){
            return riding_mode;
         }

};

class bike : public vechile{ // derived class can access  the data number &member function of the base class (via public)
    private:
        string brand;
    public:
        void setname(string name){
            brand = name;
        }
        string showname(){
            return brand;
        }
};

int main(){
    string mode_of_transport , brand_name;

    cout << "enter the mode of the transport & brand name of your bike: ";
    cin >> mode_of_transport >> brand_name;

    bike bike1; // object of base class
    bike1.setmode(mode_of_transport); // acessing the member function of base mode (inheriting the priperties)
    bike1.setname(brand_name);

    cout << "I've a " << bike1.showname() << " bike, i can travel to my native via " << bike1.usemode();
}