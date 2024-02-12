#include<iostream>
using namespace std;
void check(int);
int main()
{
    int a;
    cout<<"Enter a number ";
    cin>>a;
    check(a);
}
void check(int a)
{
    if(a%2==0)
    {
        cout<<"Given number "<<a<<" is even "<<endl;
    }
    else
    {
        cout<<"Given number "<<a<<" is odd "<<endl;
    }
}
