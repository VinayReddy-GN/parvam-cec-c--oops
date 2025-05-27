#include<iostream>
using namespace std;

class Print{
    private:
        int number;
        float decimal;
        string word;

    public:
        void setinteger(int num);

        void setfloat(float dec);

        void setstring(string str);
        void print(int n){
            cout << "printing the integer value:" << number << endl;
        }
        void print(float f){
            cout << "printing the float value:" << decimal << endl;
        }
        void print(string s){
            cout << "printing the string value:"<< word << endl;
        }

};

void Print :: setinteger(int num){
    number = num;
}

void Print :: setfloat(float dec){
    decimal = dec;
}
void Print :: setstring(string str){
    word = str;
}

int main(){
    int i;
    float d;
    string w;

    cout << "enter the each of the following(1 integer,1float & 1 string):";
    cin >> i >> d >> w;


    Print p1;
    p1.setinteger(i);
    p1.setfloat(d);
    p1.setstring(w);

    p1.print(i);
    p1.print(d);
    p1.print(w);
}