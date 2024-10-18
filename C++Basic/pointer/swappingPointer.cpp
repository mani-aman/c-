#include<iostream>
using namespace std;
void swap(int*a,int*b){
    int temp =*a;
    *a = *b;
    *b = temp;//temp is used to store the temporary data
}
int main(){
int x = 5;
int y = 8;
cout<<x<<" "<<y<<endl;
swap(&x , &y);
cout<<x<<" "<<y<<endl;
}
