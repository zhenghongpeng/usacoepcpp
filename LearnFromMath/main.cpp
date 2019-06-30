#include <iostream>
#include <cmath>
using namespace std;
long long ifComposite(long long N) {
    int x;
    for (x=2; x <= sqrt(N); x++) {
        if (N % x == 0)
            return true;
    }
    return false;
}
int main() {
    long long N, i;
    cin >> N;
    for (i=0; i <= N/2; i++) {
        if (ifComposite(i) && ifComposite(N-i)) {
            cout << i << ' ' << N - i << endl;
            return 0;
        }
    }
}