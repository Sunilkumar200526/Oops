#include<iostream>
using namespace std;
class add{
    public:
        int a=12;
    add() : a(12){}
    void operator ++(){
        ++a;
    }
    void display(){
        cout<<"count is " << a <<endl;
    }
};
int main(){
    add obj;
    ++obj;
    obj.display();
    return 0;
}
