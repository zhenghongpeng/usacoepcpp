#include <iostream>
#include <string>
using namespace std;
int main() {
    string keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string x;
    while (getline(cin, x)) {
        int sinp = x.size();
        for (auto c : x) {
            if (c == ' ') {cout << ' '; continue;}
            cout << keyboard[keyboard.find(c)-1];
        }
        cout << endl;
    }
    return 0;
}