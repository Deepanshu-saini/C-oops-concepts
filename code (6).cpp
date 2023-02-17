#include <iostream>
#include<string>
using namespace std;

class car{
    
    private:
    int milage;
    int max_speed;
    string color;
    int price;
    
    public:
    car(int q, int y, string x, int z){
        milage=q;
        max_speed=y;
        color=x;
        price=z;
    }
    
    int speed();
    int change_price(int p);
};

int car::speed(){
        return this->max_speed;
    }
int car::change_price(int p){
        this->price=p;
        return this->price;
    }
int main() {
    car nano(20,240,"blue",1000000);
    cout<<nano.speed();
    cout<<"new price"<<" "<<nano.change_price(200000);
	return 0;
}