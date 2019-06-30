#include <iostream>
using namespace std;
int main() {
    int n, k;
    int x{0};
    cin >> n >> k;
    int timeAlloted{240-k};
    while (x<=n && 5*x*(x+1)/2<=timeAlloted) {
        x++;
        continue;
    }
    cout << x-1 << endl;
    return 0;
}