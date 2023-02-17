#include <iostream>
#include<string>
using namespace std;

class Myclass{
    public:
    void myMethod(){
        cout<<"hello world";
    }
};
int main() {
    Myclass myObj;
    myObj.myMethod();
	return 0;
}