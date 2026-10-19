#include <iostream>
#include <string>
using namespace std;
int main() {
    string msg = "";
    cin >> msg;
    string translate = "";
    int i = msg.length() - 1;
    

    while (i >= 0) {

        translate += msg[i];
        i -= 1;
    }
    
    cout << translate << "\n";

    return 0;

}