#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    int B[10000]{};
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> B[i];
    }
    for (int i=0; i<N; i++) {
        string all = "";
        for (int j=1; j<=B[i]; j++) {
            all += to_string(j);
        }
        int A[10]{};
        for (char c : all) {
            A[int(c-'0')]++;
        }
        for (int k=0; k<10; k++) {
            cout << A[k];
            if (k!=9) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}