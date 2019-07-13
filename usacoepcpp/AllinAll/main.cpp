#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1;
    string str2;
    while (cin >> str1 >> str2) {
        int m = str1.length();
        int n = str2.length();
        int j = 0;
        for (int i=0; i < n && j < m; i++) {
            if (str1[j] == str2[i]) {
                j++;
            }
        }
        if (j==m) {cout << "Yes" << endl;}
        else {cout << "No" << endl;}
    }
    return 0;
}