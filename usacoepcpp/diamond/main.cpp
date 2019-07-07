#include <iostream>
#include <fstream>
#include <cmath>
#include<algorithm>
using namespace std;
int main() {
    int N{0}, K{0};
    int smallest{0};
    ifstream fin ("diamond.in");
    fin >> N >> K;
    int A[N];
    for (int i=0; i<N; i++) {
        fin >> A[i];
    }
    ofstream fout ("diamond.out");
    sort(A, A+N);
    int final = 0;
    for (int i=A[0]; i<=A[N-1]; i++) {
        smallest = i;
        int temp=0;
        for (int j=0; j<=N-1; j++) {
            if (i <= A[j] && A[j]<= i + K) {
                temp++;
            }
        }
        final = max(final, temp);
    }
    fout << final << endl;
    return 0;
}