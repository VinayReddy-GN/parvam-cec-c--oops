#include<iostream>
using namespace std;

class pizza{
    private:
        string secretingredient;

    public:
        string pizzatype , size;
        int prize;
        bool ispaymentdone;

        void orderpizza(){
            cout << " order your pizza! by selectiong  your fav pizza!" << endl;
        }

        void bookpizza(){
            cout << "booking pizza!" << pizzatype << endl;
        }

        void bakepizza(string type,string pizzasize){
            pizzatype = type;
            size = pizzasize;
            cout << "pizza type :" << pizzatype << endl;


        }

        void addingredient(string secret){

            secretingredient = secret;
        }

        void confirmorder(){
            cout << "order confirmed!" << endl;
        }

       bool checkpayment(int money , bool payment){
            prize = money;
            ispaymentdone = payment;
            if(ispaymentdone==true){
                cout << " ampunt paid: rs" << prize << " payment succesfull" << endl;
                confirmorder();
                bookpizza();
                return true;

            }    else{
                cout << "amount due : rs" << prize <<  " , payment pending" << endl;  
                return false;         
            }
        }

        void servepizza(int amount , bool paid , string typeofpizza,string sizeofpizza ,  string secretitem){
            if(checkpayment (amount,paid)){
                cout << "order cancelled" << endl;
                return;
            }
            bakepizza(typeofpizza,sizeofpizza);
            addingredient(secretitem);
            cout << "pizza served !enjoy your pizza";
        }
        
};

int main(){
    string piztype , size , secreting;
    int pizzaamount;
    bool amountpaid;

    pizza customer1;
    customer1.orderpizza();

    cout << " enter the pizza type (veg/nonveg), size (regular/medium/large):";
    cin >>  piztype >> size;

    pizzaamount = 399;
    cout <<  "did the pay thr amount(type '1' if paid/ type 'false' if not paid):";
    cin >> amountpaid ;

    customer1.servepizza(pizzaamount , amountpaid,piztype,size, secreting);


}