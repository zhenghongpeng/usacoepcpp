#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    long long count = 0;
    for (double i=1.0; i<=d; i++) {
        if (floor(i/k)!=i/k) {
            if (floor(i/l)!=i/l) {
                if (floor(i/m)!=i/m) {
                    if (floor(i/n)!=i/n) {
                        count++;
                    }
                }
            }
        }
    }
    cout << d-count << endl;
}