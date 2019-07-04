#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, sum{0};
    cin >> a >> b >> c >> d;
    while (a>=1 && c >= 1 && d >= 1) {
        sum += 256;
        a -= 1;
        c -= 1;
        d -= 1;
    }
    while (b >= 1 && a >= 1) {
        sum += 32;
        a -= 1;
        b -= 1;
    }
    cout << sum << endl;
    return 0;
}