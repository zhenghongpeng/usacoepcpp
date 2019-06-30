#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, A[4];
    for (int i=0; i<4; i++) cin >> A[i];
    sort(A, A+4);
    if (A[0]+A[1]>A[2] || A[0]+A[2]>A[3] || A[1]+A[2]>A[3]) cout << "TRIANGLE" << endl;
    else if (A[0]+A[1]==A[2] || A[0]+A[2]==A[3] || A[1]+A[2]==A[3]) cout << "SEGMENT" << endl;
    else cout << "IMPOSSIBLE" << endl;
    return 0;
}