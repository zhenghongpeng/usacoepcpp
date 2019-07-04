#include <iostream>
using namespace std;
int main() {
    int t, x;
    cin >> t;
    for (x=0; x<t; x++) {
        int N;
        cin >> N;
        if (360 % (180 - N) == 0) {
            cout << "YES" << endl;

        }
        else cout << "NO" << endl;
    }
    return 0;
}