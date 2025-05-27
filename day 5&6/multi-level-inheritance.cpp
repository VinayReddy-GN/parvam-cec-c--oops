#include<iostream>
using namespace std;

class animal{ //base class - level 0
    public:
        string name;
        void setname(string animalname){
            name = animalname;
        }

        void showanimal(){
            cout << "name of the animal:" << name << endl;
        }

};

//= carnivore(symbolic representation)
class carnivore : public animal{ //derived class - level 1
    string vegitation;
    public:
        void setfood(string food){
            vegitation = food;
        }
        void showfood(){
            cout << "type of animal:" << vegitation << endl;
        }

};

//mammal : carnivore (symbol representation)
class mammal : public carnivore{ //derived class - level 2
    string habitat;
    public:
        void sethabitat(string place){
            habitat = place;

        }
        void showhabitat(){
            cout << "living place:" << habitat << endl;
        }

};

int main(){
    string animal_name , food_type, place_of_living;

    cout << "enter the name of animal & food type and place of living:";
    cin >> animal_name  >> food_type >>place_of_living;

    carnivore c1;
    c1.setname(animal_name);
    c1.setfood(food_type);

    mammal m1;
    m1.setname(animal_name);
    m1.setfood(food_type);
    m1.sethabitat(place_of_living);

    m1.showanimal();
    m1.showfood();
    m1.showhabitat();
    

}