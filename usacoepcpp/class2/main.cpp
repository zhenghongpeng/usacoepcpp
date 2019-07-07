#include <iostream>
#include <cmath>
using namespace std;
int main() {
    for (int a{1}; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            if (double(sqrt(11 * (100 * a + b)) == int(sqrt(11 * (100 * a + b))))) {
                cout << 1100 * a + 11 * b << endl;
            }
        }
    }
}