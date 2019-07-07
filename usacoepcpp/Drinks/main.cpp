#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int summed{0};
    for (int i=0; i<n; i++) {
        int a;
        cin >> a;
        summed += a;
    }
    long double result = (long double)(summed)/(long double)n;
    cout << result << endl;
}