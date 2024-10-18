#include<iostream>
using namespace std;
void print(int x,int n){
    if(x>n)
    return;//(Terminates the execution of a function and returns control to the calling function)return means 
    cout<<x<<endl;
    print(x+1,n);
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    print(1,n);
}