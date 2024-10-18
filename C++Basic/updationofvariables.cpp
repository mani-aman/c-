#include <iostream>
using namespace std;
int main(){
    int x=5;
    cout<<x<<endl;
    x=8;
    cout<<x<<endl; //x ki previous value assign hoti hai
    x=x+9;//isma x ki ki value 8 assign hogi na ki 5
    cout<<x<<endl;
    x+=2;//x ma 2 add kro do
    x=x-10;
    cout<<x<<endl;

}