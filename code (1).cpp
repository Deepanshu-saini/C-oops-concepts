#include <iostream>
#include<string>
using namespace std;

class Myclass{
    public:
    int myNum;
    string myString;
};
int main() {
    Myclass myObj1;
    Myclass myObj2;
	myObj1.myNum=15;
	myObj1.myString="Hello biz2credit";
	
	cout<<myObj1.myNum;
	cout<<endl;
	cout<<myObj1.myString;
	
	cout<<endl;
	cout<<"Printing second object"<<"\n";
	myObj2.myNum=85;
	myObj2.myString="bye biz2credit";
	
	cout<<myObj2.myNum;
	cout<<endl;
	cout<<myObj2.myString;
	return 0;
}