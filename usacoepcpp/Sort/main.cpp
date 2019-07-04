#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;
int main() {
//    int a, b, c;
//    cin >> a >> b >> c;
//    if (a > b)
//        swap(a, b);
//    if (b > c)
//        swap(b, c);
//    if (a > b)
//        swap(a, b);
//    cout << a << ' ' << b << ' ' << c << endl;
//    return 0;
    int N;
    cin >> N;
    if (N % 2 == 0)
        cout << N/2 << endl;
    else
        cout << -(N+1)/2 << endl;
}