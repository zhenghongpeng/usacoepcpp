#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double maxdouble(double a, double b) {
    if (a>b) {return a;}
    return b;
}
int main() {
    int nlanterns, length; cin >> nlanterns >> length;
    int A[1000]{}; double B[1000]{};
    for (int i=0; i<nlanterns; i++) {
        cin >> A[i];
    }
    sort(A, A+nlanterns);
    B[0]=A[0];
    for (int i=1; i<nlanterns; i++) {
        B[i] = (A[i]-A[i-1])/2.0;
    }
    B[nlanterns]=length-A[nlanterns-1];
    double ans=0;
    for (int i=0; i<=nlanterns; i++) {
        ans=maxdouble(ans, B[i]);
    }
    cout << fixed << setprecision(9) << ans << endl;
}