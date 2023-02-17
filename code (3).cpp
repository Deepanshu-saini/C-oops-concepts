#include <iostream>
#include<string>
using namespace std;

class car{
    public:
    int milage;
    int max_speed;
    string color;
    int price;
    int speed();
};

int car::speed(){
        return this->max_speed;
    }
int main() {
    car nano;
    nano.milage=19;
    nano.max_speed=240;
    nano.color="black";
    nano.price=1000000;
    cout<<nano.speed();
	return 0;
}