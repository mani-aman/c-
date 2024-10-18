#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the first no. ";
    cin>>a;
    cout<<"enter the second no. ";
    cin>>b;
    cout<<"enter the third no. ";
    cin>>c;
    if (a>b and a>c)//else if ka use multiple condition ma kiya jata h jaisa isma kiya gaya h
    {
        cout<<"a is the greatest no.";
    }
    else if(b>a and b>c)
    {
        cout<<"b is the greatest no.";
    }
    else
    cout<<"c is the greatest no.";
}