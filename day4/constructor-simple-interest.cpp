#include<iostream>
using namespace std;

class interest{
    private:
        int principle,term,rate, totalinterest;
        float rateinpercent;
    public:
        int simpleinterest = 0;
        interest(){
            principle = 0;
            term = 0;
            rate=0;
            totalinterest = 0;
            rateinpercent = 0;
            cout << "total interest earned:" << totalinterest << endl;

        }

        void setvalues(int a , int y){ //setter function
            principle = a;
            term = y;
        }

        void setratevalueinteger(int rateininteger){  //setter function
            rate = rateininteger;
        }
        void setvaluefloat(float rateinfloat){  //setter function
            rateinpercent = rateinfloat;
        }

        interest(int p,int t,int r){ // parameterized constructor (with 3 paramater)
            setvalues(p,t);
            setratevalueinteger(r);
            simpleinterest = (principle*term*rate)/100;
            cout << "simple interest for the following details:" << endl;
            cout << "principle amount:" << principle << endl;
            cout << " no of years(term):" << term << endl;
            cout << "rate of interst(in integer):" <<rate<< endl;
            totalinterest = principle + simpleinterest;
            cout << "total interest earned:" << totalinterest << endl;
        }

         interest(int p,int t,float rateindecimal){// parameterized constructor (with 3 paramater)
            setvalues(p,t);
            setvaluefloat(rateindecimal);
            simpleinterest = (principle*term*rateinpercent);
            cout << "simple interest for the following details:" << endl;
            cout << "principle amount:" << principle << endl;
            cout << " no of years(term):" << term << endl;
            cout << "rate of interst(in decimal):" << rateinpercent<<endl;
            totalinterest = principle + simpleinterest;
            cout << "total interest earned:" << totalinterest << endl;
        }

        ~interest(){ // automaticalli called upto memory used by the constructor when the object has the scope
            cout << " destroctor has been called tp destroy or free up the memory used by the constructor"<<endl;
        };
        
};

int main(){
    int amount , year , rateofinterest;
    float interestrate;

    interest int1; //default constructor

    cout << "enter the principle amount,no of years & rate of interest(eg.5):";
    cin >> amount >> year >> rateofinterest;

    interest int2(amount , year , rateofinterest ); //parameterized constructor

    cout << "enter the principle amount,no of years & rate of interest(eg 0.05):";
    cin >> amount >> year >> interestrate;

    interest int3(amount,year,interestrate);

}