#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    //(condition) ? if true : if false ;  (this is ternary operator)
    (n%2==0) ? cout<<"even number" : cout<<"odd number" ;
}