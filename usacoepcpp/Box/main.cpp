#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    int A[1000], B[1000];
    int j{0};
    while (cin >> A[j] >> B[j]) {
        if (A[j] > B[j]) { swap(A[j], B[j]); }
        j++;
    }
    for (int i=0; i<j; i++) {
        int c1=0, c2=0;
        for (int y=0; y<j; y++) {
            if (y!=i) {
                if (A[i] == A[y] || A[i] == B[y]) {
                    c1++;
                }
                if (B[i] == A[y] || B[i] == B[y]) {
                    c2++;
                }
            }
        }
        if ((c1!=3 && c1!=))
    }
}