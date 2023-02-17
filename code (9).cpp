#include <iostream>
using namespace std;

class animal{
    public:
    void animal_sound(){
        cout<<"the animal makes a sound"<<endl;
    }
};

class pig: public animal{
    public:
    void animal_sound(){
        cout<<"the pig says oink oink"<<endl;
    }
};

class dog: public animal{
    public:
    void animal_sound(){
        cout<<"the dog says bow bow"<<endl;
    }
};
int main() {
    animal myanimal;
    pig mypig;
    dog mydog;
    myanimal.animal_sound();
    mypig.animal_sound();
    mydog.animal_sound();
    return 0;
    
}