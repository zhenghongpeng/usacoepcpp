#include <iostream>
using namespace std;
int main() {
    int N;
    int a[101];
    int i{0};
    while (cin >> a[i++])
    for (int j=i-2; j>=0; j--) {cout << a[j];}
    cout << endl;
}