#include <iostream>
using namespace std;
int main() {
    int N;
    while (cin >> N) {
        int a = N % 10;
        int b = N / 10 % 10;
        int c = N / 100 % 10;
        if (a*a*a+b*b*b+c*c*c == N) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}