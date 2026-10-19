#include <iostream>
#include <string>
using namespace std;

int main() {
    int number = 12345;
    int revnuumber = 0;

    while(number) {
        revnuumber = revnuumber * 10 + number % 10;
        number = 10; 
    }
    cout << revnuumber;
}