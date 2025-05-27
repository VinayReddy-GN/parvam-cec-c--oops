#include<iostream>
using namespace std;

class bike{
    public:
        string brand, model, engine_type;
        int year,price;


    void injectfuel(){ //internal data hidden 
        cout << "ingected the fuel - petrol ";
    }

    void ignitefuel(){//internal data hidden
        cout << " ignited the fuel!" << endl;
    }

    void start(string model){
        injectfuel();  //abstraction
        ignitefuel(); // abstaction
        cout << model << "startrd, happy journey!" << endl;
    }

    void stopacceleration(){//internal data hidden
        cout << "acceleration stopped !" << endl;
    }

    void stopfuelflow(){//internal data hidden
        cout << "stopping the fuel !"<< endl;
    }

    void stop(){
        stopacceleration(); //abstraction
        stopfuelflow(); //abstractacxton
        cout << model << " stopped,lock the vechile!"<< endl;

    }
 
};


int main(){
    bike bike1;
    bike1.brand = "bajaj";
    bike1.model = "pulsar";
    bike1.engine_type = "BS6";
    bike1.year = 2022;
    bike1.price = 1300000;
    bike1.start(bike1.model);
    bike1.stop();

}

