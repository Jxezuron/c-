#include <iostream>
#include <string>
using namespace std;

int main() {

    int number = 25;

    string result = (number > 20) ? "25 is really greater than 20": "20 isn't really greater than 25";

    cout << result;

    return 0;
}