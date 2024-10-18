// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin>>a;
//     char op;
//     cin>>op;
//     int b;
//     cin>>b;
//     switch(op)
//     {
//         case '+':
//         cout<<a+b<<endl;
//         break;
//         case '-':
//         cout<<a-b<<endl;
//         break;
//         case '*':
//         cout<<a*b<<endl;
//         break;
//          case '/':
//         cout<<a/b<<endl;
//         break; 
//         default:
//         cout<<"Invalid input"<<endl;
//         break;
        
    
//     }
// }



#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"Enter the first number";
    cin>>a;
    cin>>op;
    cout<<"Enter the operator";
     cout<<"Enter the second number";
    cin>>b;
        switch(op){
            case('+'):
            cout<<a+b<<endl;
            break;
             case('-'):
            cout<<a-b<<endl;
            break;
             case('*'):
            cout<<a*b<<endl;
            break;
             case('/'):
            cout<<a/b<<endl;
            break;
            if(b=!0)
            {
                cout<<a/b<<endl;
            }
            else{
                cout<<"Error divisible by zero";
            }
            default:
            cout<<"Invalid input or operator";
            break;
        }
}