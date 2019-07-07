#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long a, b, s;
    cin >> a >> b >> s;
    if ((s-abs(a)-abs(b))<0) {cout << "No" << endl;}
    else if ((s-a-b)%2==0) {cout << "Yes" << endl;}
    else if ((s-a-b)%2==1) {cout << "No" << endl;}
}