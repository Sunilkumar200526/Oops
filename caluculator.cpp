#include<iostream>
using namespace std;
int main()
{
    float a,b;
    int op;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"1.Addition\n2.subtraction\n3.Multplication\n4.Division"<<endl;
    cout<<"Select any one operartion to be exicuted(1 to 4): ";
    cin>>op;
    switch(op)
    {
        case 1:
                cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
                break;
        case 2:
                cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
                break;
        case 3:
                cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
                break;
        case 4:
                cout<<"The division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
                break;
        default:
                cout<<"select valid operation";
                break;
        
    }
}
