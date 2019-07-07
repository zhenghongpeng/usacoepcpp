#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    if (k != 10) {
        for (int i = 0; i < n; i++) {
            cout << k;
        }
        cout << endl;
        return 0;
    }
    else if ((n==1) && (k==10)) {cout << -1 << endl; return 0;}
    else {
        cout << 1;
        for (int i = 1; i < n; i++) {
            cout << 0;
        }
        cout << endl;
        return 0;
    }
}