#include <iostream>
#include<string>
using namespace std;

class Myclass{
    public:
    int myNum;
    string myString;
};
int main() {
    Myclass myObj;
	myObj.myNum=15;
	myObj.myString="Hello biz2credit";
	
	cout<<myObj.myNum;
	cout<<endl;
	cout<<myObj.myString;
	return 0;
}