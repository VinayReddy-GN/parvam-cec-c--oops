#include<iostream>
#include<fstream>
using namespace std;

class car{
    private:
        string brand , model , varient , features[10];
        int year , price , featurecount ;
    public:
        void addcardetails(string carbrand , string carmodel , string carvarient , int year , int price){
            brand = carbrand;
            model = carmodel;
            varient = carvarient;
            this->price = price;

        }
        void addcarfeatures(int count){
            featurecount = count;
            cin.ignore();
            cout << "enter the " << count << "features of the car:";
            for(int i=0; i<count; i++){
                getline(cin , features[i]); //can enter multiple words along with space
            }
            cout << "click enter button for next input" << endl;
        }
        void storecardetails(){
            ofstream store("car_details.txt", ios::app); //append the content to existing file
            store << "the car details are as fallow : " << endl;
            store << "car brand : " << brand << endl;
            store << "car model : " << model << endl;
            store << "car varient : " << varient << endl;
            store << "launch year : " << year << endl;
            store << "offer price:rs. " << price << endl;
            store << "car has these features : " << brand << endl;
            for(int i=0; i<featurecount; i++){
                store << "\t" << i+1 << "." << features[i] << endl;
            }
            store << "-------------------------------" << endl;
        }
        

};
int main(){
    string car_brand , car_model , car_variant ,car_features[10];
    int feature_count , launch_year , launch_prize;

    cout << "enter the car details:" << endl;
    cout << "brand , model , varient , launch year , launh price:"<< endl;
    cout << "ex: tata, curve , (petrole/desile/ev), 2025 , 140000" << endl;
    cin >> car_brand >> car_model >> car_variant >> launch_year >> launch_prize;

    cout << "enter the number of features:" << endl;
    cin >> feature_count;
    cin.ignore();

    car car1;
    car1.addcardetails(car_brand , car_model , car_variant , launch_year , launch_prize);
    car1.addcarfeatures(feature_count);
    car1.storecardetails();

    car car2;
    car2.addcardetails("audi" , "q6" , "petrol" , 2019 , 1200000);
    car2.addcarfeatures(4);
    car2.storecardetails();

}