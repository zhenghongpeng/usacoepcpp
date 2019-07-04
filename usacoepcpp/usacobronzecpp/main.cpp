#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >>  m >> a;
    cout << (long long)(ceil(n/double(a))*ceil(m/double(a))) << endl;
    return 0;
}