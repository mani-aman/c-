#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter n: "; 
    cin>>n;
    //print like 1 3 5 997 9
     for(i=1;i<=2*n-1;i+=2){
        cout<<i<<" ";
     }
}