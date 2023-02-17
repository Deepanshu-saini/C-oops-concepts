#include <iostream>
using namespace std;

class vehicle{
    private:
    string bran="ford";
    public:
    void honk(){
        cout<<"Peep Peep"<<"\n";
    }
    string see(){
        return this->bran;
    }
};

class 

class car: public vehicle{
    public:
    string model="Mustang";
};
int main() {
    car mycar;
    mycar.honk();
    cout<<mycar.see();
    return 0;
}