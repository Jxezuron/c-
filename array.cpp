#include <iostream>
#include <string>

using namespace std;

int main() {
    string motors[6] = {"dream", "click", "nex", "yamaha", "scoopy", "PCX"};
    
    for ( string motor : motors ) {
        cout << motor << "\n";
    }
    
    for (int i = 0; i < 10; i++) {
        cout << '=';
    }
    cout << "\n";
    for (int i = 0; i < 10; i++) {
        cout << motors[i] << "\n";
    }

    int mynumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(mynumbers);

}