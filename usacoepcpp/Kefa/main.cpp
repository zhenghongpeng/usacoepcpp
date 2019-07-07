#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int A[100000];
    int final{1}, temp{1};
    for (int i=0; i<n; i++) cin >> A[i];
    for (int i=1; i<n; i++) {
        if (A[i] >= A[i-1]) {temp ++;}
        else {final = max(final, temp); temp = 1;}
    }
    if (final < temp) {final = temp;}
    cout << final << endl;
    return 0;
}
//10
//
//1 2 0 1 2 3 4 5 6 7
//2 output 2, should be 8