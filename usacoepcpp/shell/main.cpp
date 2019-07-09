#include <iostream>
#include <fstream>
using namespace std;
int score(int i) {
    for (int x=0; x < N; x++) {

    }
}
int main() {
    int N;
    ifstream fin ("shell.in");
    ofstream fout ("shell.out");
    fin >> N;
    int A[100], B[100], T[100];
    for (int x=0; x<N; x++) {
        fin >> A[x] >> B[x] >> T[x];
    }
    int result = 0;
    for (int i=0; i<3; i++) {
        result = max(result, score(i));
    }
    return 0;
}
