#include <iostream>
#include <cmath>
using namespace std;
bool ifPrime(int num) {
    if (num <= 3) {
        return num > 1;
    } else if (num % 2 == 0 || num % 3 == 0) {
        return false;
    } else {
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
}
bool ifTprime(long long n) {
    if (floor(sqrt(n))==sqrt(n)) {
        if (ifPrime(sqrt(n))) {
            return true;
        }
    }
    return false;
}
int main() {
    long long k;
    cin >> k;
    for (long long i=0; i<k; i++) {
        long long n;
        cin >> n;
        if (ifTprime(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}