#include <iostream>
using namespace std;
bool A[1002];
int main() {
    int N, K;
    cin >> N >> K;
    for (int i=1; i<=K; i++) {
        for (int j=1; j<=N; j++) {
            if (j % i == 0) {
                A[j] = !A[j];
            }
        }
    }
    for (int j=1; j<=N; j++) {
        if (A[j]) cout << j << " ";
    }
    cout << endl;
}