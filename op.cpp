#include <iostream>
using namespace std;

// int main() {
//     int sum1 = 83 + 29;
//     int sum2 = sum1 + 87;
//     int sum3 = sum2 + sum2;
//     cout << sum3;
//     return 0;
// }

int main() {
    int x = 8;
    int y = 3;
    cout << (x + y) << "\n";
    cout << (x - y) << "\n";
    cout << (x * y) << "\n";
    cout << (x / y) << "\n";
    cout << (x % y) << "\n";
    
    // ++

    int t = 7;
    ++t;
    cout << t << "\n";
    


    // --

    int g = 9;
    --g;
    g--;
    g--;
    cout << g << "\n";


    int u = 10;
    u &= 5;
    cout << u << "\n";

    // comparison operators
    int m = 12;
    int k = 90;
    cout << (m > k) << "\n";

    //Operator Precedence

    int result1 = (1 + 3) * 8;

    cout << result1 << "\n";

    
    return 0;
}