#include<iostream>
using namespace std;
int main ()
{
    unsigned short ushort_int=65536; 
    signed short signed_short=-32769;
    int a=799846;
    long int longint=98555;
    long long int llint=73643159;
     
     
     cout<<"size of short int"<<sizeof(short int)<<endl;
     cout<<"size of int"<<sizeof(int)<<endl;
     cout<<"size of long "<<sizeof(long)<<endl;
     cout<<"size of long long int"<<sizeof(long long)<<endl;
     return 0;

}