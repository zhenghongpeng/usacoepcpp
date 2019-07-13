#include <iostream>
#include <string>
using namespace std;
int main() {
    string N;
    int marker = 1;
    while (getline(cin, N)) {
        int sN = N.size();
        for (int i=0; i<sN; i++) {
            if (N[i] == '\"') {
                if (marker == 1) {
                    marker *= -1;
                    cout << "``";
                } else {
                    marker *= -1;
                    cout << "''";
                }
            }
            else {
                cout << N[i];
            }
        }
        cout << endl;
    }
    return 0;
}