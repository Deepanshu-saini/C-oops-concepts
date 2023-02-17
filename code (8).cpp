#include <iostream>
using namespace std;

class employee{
    protected:
    int salary;
    public:
    int get(){
        return salary;
    }
    void set(int s){
        salary=s;
    }
};

class programmer: public employee{
    public:
    int bonus;
    int bget(){
        return bonus;
    }
    void bset(int s){
        bonus=s;
    }
};
int main() {
    programmer deepanshu;
    // int a,b;
    // cout<<"enter your salary"<<endl;
    // cin>>a;
    // cout<<"enter bonus"<<endl;
    // cin>>b;
    cout<<"setting salary as 50000"<<endl;
    deepanshu.set(50000);
    cout<<"setting bonus as 15000"<<endl;
    deepanshu.bset(15000);
    cout<<"printing salary"<<endl;
    cout<<deepanshu.get()<<endl;
    cout<<"printing bonus"<<endl;
    cout<<deepanshu.bget();
    return 0;
    
}