#include <iostream>
#include <string>
using namespace std;
// int main() {
//     string firstname;
//     cout << "Enter your firstname: ";
//     cin >> firstname;
//     cout << "your first name is " << firstname;

//     return 0;

// }
// String that have space and tab input into cin will only print out the first word before space and tab. 
// so we need to use getline() function to print the whole sentence with space and tab.
int main() {
    string firstname;
    cout << "Enter your firstname: ";
    getline(cin, firstname);
    cout << "your first name is " << firstname;

    return 0;

}