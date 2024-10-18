//main function sbsa pahla chalta hai
 #include<iostream>
 using namespace std;
 void usa()
 {
    cout<<"I am from usaa"<<endl;
    return; //return hota hi function khatsm ho jata hai iska nicha kuch bhi likha ho wo run nhi krta h
    cout<<"I am from usaa"<<endl;
 }
 void india()
 {
     usa();
    cout<<"I am from indiaa"<<endl;
     usa();
 }
 int main()//main ek baar lika jata h
 {
    cout<<"you are in main function"<<endl;
    india();
   
     }