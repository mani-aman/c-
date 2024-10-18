#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. ";
    cin>>n;
    if (n%5==0 or n%3==0)//agar dono condition sach karani hogi toh and likhta hai
    {
        cout<<"divisible number";
    }
    else
    {
        cout<<"not divisible number";
    }
}