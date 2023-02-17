#include <iostream>
#include<string>
using namespace std;

class car{
    public:
    int milage;
    int max_speed;
    string color;
    int price;
    car(int q, int y, string x, int z){
        milage=q;
        max_speed=y;
        color=x;
        price=z;
    }
    int speed();
};

int car::speed(){
        return this->max_speed;
    }
int main() {
    car nano(20,240,"blue",1000000);
    cout<<nano.speed();
	return 0;
}