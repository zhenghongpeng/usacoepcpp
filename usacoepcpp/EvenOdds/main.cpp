#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n, k;
    cin >> n >> k;
    if (k <= ceil(n/2.0)) cout << (long long)(2*k-1) << endl;
    else cout << (long long)(2*(k-ceil(n/2.0))) << endl;
    return 0;
}