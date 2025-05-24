#include<iostream>
using namespace std;

class Area{
    private:
        int length , breadth , height;
        float radius;
    public:
        int result;

        Area(){ //default constructor (no parameter)
            length = 0;
            breadth = 0;
            result = 0;
            height = 0;
            result = 0;
            cout << "Area:" << result << endl;

        }
        Area(int a){ // parameterized constructor (1 parameter-int)
            length = a;
            result = length*length;
            cout << "Area of the square: " << result << endl;
        }

        Area(int c , int d){ // parameterized constructor (2 parameter)
            length = c;
            breadth = d;
            result = length*breadth;
            cout << "Area of the rectanglr: " << result << endl;
        }

        Area(float r){ //parameterized constructor( 1 parameter with different float data type )
            radius = r;
            result = 2*3.14*radius;
            cout << "Area of the circle: " << result << endl;
        }

         Area(int l , int b , int h){ //parameterized constructor (3 parameter)
            length = l;
            breadth = b;
            height = h;
            result = length*breadth*height;
            cout << "Area of the cube: " << result << endl;
        }
};

int main(){
    Area a1;


    int len , wid , hgt;
    float rad;

    cout << " enter the length of the square:";
    cin >> len;

    Area a2(len); // finding area of square

    cout << "enter the length & breadth of the rectangle:";
    cin >> len >> wid;

    Area a3(len,wid);//finding area of rectanglr
    cout << "enter the radius of the circle:";
    cin >> rad;

    Area a4(rad);//finding area of circle

    cout << "enter the length & bradth & heigth of the cube";
    cin >> len >> wid >> hgt;

    Area a5(len,wid,hgt); // finding area of cube
}