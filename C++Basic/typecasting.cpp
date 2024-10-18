// #include<iostream>
// using namespace std;
// int main ()
// {
//     int x;
//     cin>>x;
//     float y = (float)x;//typecasting
//     cout<<y/2;
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter an integer: ";
    
    if (cin >> x) { // Check if the input is valid
        float y = static_cast<float>(x); // Typecasting
        cout << y / 2 << endl; // Output the result
    } else {
        cout << "Invalid input." << endl; // Handle invalid input
    }

    return 0;
}
