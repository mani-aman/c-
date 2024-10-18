#include<iostream>
using namespace std;
int main()
{
    int x=3;
    int* p=&x;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;//isasa hm x ki value ko print kara sakta h
    *p=55;//isasa hm x ki value ko change kar sakta h
    cout<<x<<endl;
}