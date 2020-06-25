#include <iostream>
using namespace std;
int Fibb(int n) {
    if (n==0) {return 0;} if (n==1) {return 1;}

    return Fibb(n-1)+Fibb(n-2);
}
int main() {
    int n; cin >> n;
    cout << Fibb(n) << endl;
}