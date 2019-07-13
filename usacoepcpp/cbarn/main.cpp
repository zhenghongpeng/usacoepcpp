#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main() {
    ifstream fin ("cbarn.in");
    ofstream fout ("cbarn.out");
    int N;
    fin >> N;
    int A[1000];
    for (int i=0; i<N; i++) {
        fin >> A[i];
    }
    int ans = -1;
    for (int i=0; i<N; i++) {
        int result = 0;
        int result2 = 0;
        for (int j=0; j<N; j++) {
            if (j>i) {
                result += A[j]*(j-i);
                result2 += A[j] * (N+i-j);
            }
            if (j<=i) {
                result += A[j]*(N+j-i);
                result2 += A[j] * (i-j);
            }
        }
        result = min(result, result2);
        if (ans==-1) {ans = result;}
        else {ans = min(ans, result);}
    }
    fout << ans << endl;
}