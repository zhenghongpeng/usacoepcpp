#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int cost = k*w*(w+1)/2;
    int out = cost - n;
    if (out < 0) out = 0;
    cout << out << endl;
    return 0;
}