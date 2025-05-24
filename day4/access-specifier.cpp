#include<iostream>
using namespace std;

class Bank{
    private:
     int balance=0;
    public:
    // member data of the class
     string custName , custEmail;
     int acNumber;

     void createAccount(string cName, string cEmail){
        custName = cName;
        custEmail = cEmail;
     }

     void displayInfo(){
        cout << "customer Name:" << custName << endl;
        cout << "customer Email:" << custEmail << endl;
     }
     //setter

     void addBalance(int account,int amount){
        balance +=amount;
        cout<<"the amount has been deposited successfully!"<<endl;
     }
     //setter
     void withdrawAmount(int account,int amount){
      if(amount <= balance){
       balance -= amount;
       cout<<"the amount has been withdrawn successfully!"<<endl;
     }
     else{
      cout << "insuffient balance cannot withdrawn" << endl;
     }
   }
     //getter

     void checkBalance(){
        cout << "Balance: " << balance << endl;
     }
};

int main(){
    Bank cust1; // object declaration
    string name, email;
    int acNum, amount; 
    //we can access the value to the public membrane

    cust1.custName="vinay";
    cust1.custEmail="vinay@gmail.com";
    cust1.acNumber=12345;
    //cust1.balance = 8000;//we can't assigen the value to the private member

    cout << "enter your name:";
    cin >> name;
    
    cout << "enter your Email:";
    cin >> email;
    cout << "enter your account number:";
    cin >> acNum;
    cout << "enter the amount of deposited:";
    cin >> amount;


    cust1.createAccount(name,email);
    cust1.displayInfo();
    cust1.addBalance(1234,1000);
    cust1.checkBalance();

    cout << "enter thr amount to be withdrawn:";
    cin>> amount;
    cust1.withdrawAmount(acNum,amount);
    cust1.checkBalance();
   
}
