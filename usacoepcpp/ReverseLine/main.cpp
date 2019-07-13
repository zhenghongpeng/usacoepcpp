#include <iostream>
#include <string>
using namespace std;
int main() {
    string x;
    getline(cin, x);
    int sx = x.size();
    for (int i=sx-1; i>=0; i--) {
        cout << x[i];
    }
    cout << endl;
    return 0;
}