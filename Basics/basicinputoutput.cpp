//in/out example
#include <iostream>
#include <string>
using namespace std;
int main(){
    // int i;
    // cout << "Enter a Number: ";
    // cin >> i;
    // cout << "You Entered " << i;
    string mystr;
    cout << "What is your name? ";
    getline (cin, mystr);
    cout << "Hello " << mystr << ".\n";
    cout << "What is your favorite ice cream? ";
    getline (cin, mystr);
    cout << "I like " << mystr << " too!";
    return 0;
}