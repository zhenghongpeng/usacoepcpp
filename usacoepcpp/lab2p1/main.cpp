#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main() {
    long long N, resm1{INT_MAX}, resm2{-INT_MAX}, ress{0};
    cin >> N;

    for (long long i=0; i<N; i++) {
        long long A;
        cin >> A;
        resm1 = min(resm1, A);
        resm2 = max(resm2, A);
        ress += A;
    }
    cout << resm1 << ' ' << resm2 << ' ' << ress << endl;
    return 0;
}