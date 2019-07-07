#include <iostream>
using namespace std;
int main() {
    int n, result{0};
    cin >> n;
    for (int i=1; i<n; i++) {
        result += i*(n-i);
    }
    result += n;
    cout << result << endl;
}