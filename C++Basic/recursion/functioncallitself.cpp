#include<iostream>
using namespace std;
void greet()
{
 cout<<"Hey!"<<endl;
 greet();//function call itself is known as recursion
}

int main()
{
    cout<<"Firstly run in main"<<endl;
    greet();

}