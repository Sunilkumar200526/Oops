#include<iostream>
using namespace std;

//template function
template <typename Digit> Digit add(Digit num1,Digit num2)
{
    return num1+num2;
}

//template class
template <typename TempData>
class Report
{
    TempData value;
    public:
    Report(TempData num1)
    {
        value=num1;
    }
    void displayValue()
    {
        cout<<"The value is "<<value<<endl;
    }
};

int main()
{
    int intResult=add(12,18);
    float floatResult=add(22.0,12.0);
    cout<<" sum of the values : "<<intResult<<endl;
    cout<<" sum of the values : "<<floatResult<<endl;
    Report <int>obj(2);
    Report <double>obj2(8.34535353);
    obj.displayValue();
    obj2.displayValue();
    return 0;
}
