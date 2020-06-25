#include <iostream>
#include <string>
using namespace std;
int main() {
    string N;
    cin >> N;
    int ca=0, cb=0, cc=0;

    while (N[0]=='a') {
        ca+=1;
        N.erase(0, 1);
    }
    while (N[0]=='b') {
        cb+=1;
        N.erase(0, 1);
    }
    while (N[0]=='c') {
        cc+=1;
        N.erase(0, 1);
    }
    if ((ca==cc || cb==cc) && N.size()==0 && ca>=1 && cb>=1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}