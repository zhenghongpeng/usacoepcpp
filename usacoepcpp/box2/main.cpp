#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    int A[1000], B[1000];
    int j{0};
    while (cin >> A[j] >> B[j]) {
        if (A[j] < B[j]) { swap(A[j], B[j]); }
        j++;
        if (j==6) {
            for (int i = 0; i < 6; i++) {
                int c1 = 0, c2 = 0;
                for (int y = 0; y < 6; y++) {
                    if (A[i] == A[y]) {
                        c1++;
                    }
                    if (A[i] == B[y]) {
                        c1++;
                    }
                    if (B[i] == A[y]) {
                        c2++;
                    }
                    if (B[i] == B[y]) {
                        c2++;
                    }
                }
                c1-=1; c2-=1;
                if ((c1 != 3 && c1 != 7 && c1 != 11) || (c2 != 3 && c2 != 7 && c2 != 11)) {
                    cout << "IMPOSSIBLE" << endl;
                    break;
                }
                if (i == 5) {
                    cout << "POSSIBLE" << endl;
                }
            }
            for (int i=0; i<6; i++) {
                A[i]=0; B[i]=0;
            }
            j=0;
        }
    }
//    for (int i=0; i<j-1; i++) {
//        cout << A[i] << " " << B[i] << endl;
//    }
}