#include <iostream>
using namespace std;
int choose(int n, int m) {
    cout << "n=" << n << ", m=" << m << endl;
    if (m==0) {return 1;}
    if (n<m) return 0;
    if (m == 1)return n;
    return choose(n-1, m-1) + choose(n-1, m);
}
int main() {
    cout << "result=" << choose(5, 3) << endl;
}