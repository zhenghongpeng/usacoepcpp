#include <iostream>
#include <cmath>
using namespace std;
long long factorial(long long N) {
    long long product = 1;
    for (long long i=1; i<=N; i++) {
        product *= i;
        product = product % 1000000;
    }
}
int main() {
    long long N;
    cin >> N;
    N = min(25, int(N));
    long long sum = 0;
    for (long long i=1; i<=N; i++) sum += factorial(i); sum = sum % 1000000;
    cout << sum  << endl;
}