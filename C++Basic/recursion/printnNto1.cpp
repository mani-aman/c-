#include<iostream>
using namespace std;
void print(int n){
    if(n==0)
    return;//(Terminates the execution of a function and returns control to the calling function)return means 
    cout<<n<<endl;
    print(n-1);
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    print(n);
}