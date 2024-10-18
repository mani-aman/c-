//main function sbsa pahla chalta hai
 #include<iostream>
 using namespace std;
 void greet()
 {
    cout<<"Good Morning"<<endl;
    cout<<"How Are You??"<<endl;
 }
 int main()
 {
    greet();//sabsa pahla  function ma sa greet call hoga uska main function ma jisko ouput karana h wo print hoga
    cout<<"Hey"<<endl;
    greet();

 }