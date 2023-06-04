/*ZenZ cars sell customized toy cars. They are top rated in customer satisfaction.
 When a kid enters the store he can just pick any car in display which has default features.
The kid can list the features of the car, wait for a week and get the car delivered.
Sometimes ZenZ cars hosts exhibition of elite cars that had been produced in the past.
When a kid visits such exhibition, he can choose to buy similar kind of car in the display.

The students are expected to use appropriate constructors to create car objects

Note: The car objects has the following features

Engine Model - String

Mileage - float

Colour - String

Year - integer

The six elite cars(objects) must be created and must be used as per input number



Cars to be used in order are:

1921, Yellow, Mc07, 67.5
1922, Red, Mc01, 63.2
1925, Black, Mc03, 69.7

1929, Orange, Mc06, 70.5
1932, Maroon, Mc04, 37.2
1935, Grey, Mc09, 97.7*/

#include<iostream>
#include<string.h>
using namespace std;
class CAR{
private:
    int year;
    string model;
    string color;
    float mileage;
public:
    CAR(int y,string m,string c,float mi){
        year=y;
        model=m;
        color=c;
        mileage=mi;
    }
    void display(){
        cout<<year<<endl;
        cout<<model<<endl;
        cout<<color<<endl;
        cout<<mileage<<endl;
    }
};

int main(){
    int c;
    cin>>c;
    CAR car1(1921,"Yellow","Mc07",67.5);
    CAR car2(1922,"Red","Mc01",63.2);
    CAR car3(1925,"Black","Mc03",69.7);
    CAR car4(1929,"Orange","Mc06",70.5);
    CAR car5(1932,"Maroon","Mc04",37.2);
    CAR car6(1935,"Grey","Mc09",97.7);
    while(c!=0){
        switch(c){
            case 1:
                car1.display();
                break;
            case 2:
                car2.display();
                break;
            case 3:
                car3.display();
                break;
            case 4:
                car4.display();
                break;
            case 5:
                car5.display();
                break;
            case 6:
                car6.display();
                break;
        }
        c=c-1;
    }
    return 0;
}



