#include <iostream> 
#include <string>
using namespace std;

int main() {
    int number[5] = {10, 20, 30, 40, 50};
    string word = "Hello bro";
    for (int num : number) {
        cout << (num * 19) << "\n";
    }
    cout << "\n";
    for (char w : word) {
        cout << w << "\n";
    }


}