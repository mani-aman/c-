#include<iostream>
#include<iomanip>

 
using namespace std;
int main ()
{
    float x=82525.01354f;
    double  a=5.564615;
    long double aa=2326.6556L;
    cout<<setprecision(10);
    //setprcesion set the printing digit
    cout<<"float x is"<<x<<endl;
    cout<<"double is"<<a<<endl;
    cout<<"long double is"<<aa<<endl;

    return 0;
}