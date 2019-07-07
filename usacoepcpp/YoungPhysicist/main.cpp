#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int sx{0}, sy{0}, sz{0};
    for (int i=0;i<N;i++) {
        int x ,y, z;
        cin >> x >> y >> z;
        sx+=x; sy+=y; sz+=z;
    }
    if (sx==0 && sy==0 && sz==0) cout << "YES" << endl;
    else cout << "NO" << endl;
}