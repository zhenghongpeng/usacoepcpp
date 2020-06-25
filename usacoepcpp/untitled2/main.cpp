#include <iostream>
#include <fstream>
#include <queue>

using namespace std;
#define sz(A) sizeof(A)/sizeof(A[0])
int triples(int A[], int N) {
    int count = 0;
    for (int i=0; i<N; i++) {
        int j = i + 1;
        int k = N-1;
        while (j < k) {
            int s = A[i] + A[j] + A[k];
            if (s == 0) {
                count++;
                j++;
                k--;
            } else if (s > 0) {
                k--;
            } else {
                j++;
            }

        }
    }
    return count;
}
int main() {
    ifstream in("SumThree.in");
    ofstream out("SumThree.out");

    int N;
    in >> N;
    int inp[N];
    for (int i=0; i<N; i++) {
        in >> inp[i];
    }
    sort(inp, inp+sz(inp));
    cout << triples(inp, sz(inp)) << endl;
    return 0;
}