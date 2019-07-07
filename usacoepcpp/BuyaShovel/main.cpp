#include <iostream>
using namespace std;
int main() {
    long long k, r, shovels{0};
    cin >> k >> r;
    r = r % 10; k = k % 10;
    while (true) {
        shovels += 1;
        long long temp = k*shovels;
        temp = temp % 10;
        if ((temp == 0) || (temp == r)) {cout << shovels << endl; return 0;}
    }
}