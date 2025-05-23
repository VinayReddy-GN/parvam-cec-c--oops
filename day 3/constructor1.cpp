#include<iostream>
using namespace std;

class Customer{
    public:
        string firstName,lastName;
        int age, rating;

        //initialised the constructor
        Customer(){
            firstName = "john";
            lastName = "doe";
            age = 10;
            rating = 5;
        }

        void showDetails(){
            cout << "Customer Name:" << firstName << " " << lastName << endl;
            cout << "Customer Age:" << age << endl;
        }

        void giveRating(int rate);

        void showRating(){
            cout << "your given" << rating << " star rating.thank you!" << endl;
        }
};

void Customer :: giveRating(int rate){
    rating = rate;
}

int main(){
    Customer cust1; // invoked the constructor to assign the default value
    cust1.showDetails();
    cust1.showRating();

    Customer cust2;

    cust2.firstName = "vinay";
    cust2.lastName = "reddy";
    cust2.age = 20;

    int starRating;

    cout << " give your rating(0 to 5):";
    cin >> starRating;
    cust2.showDetails();
    cust2.giveRating(starRating);
    cust2.showRating();


}