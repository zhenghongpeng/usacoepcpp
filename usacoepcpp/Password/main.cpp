#include <iostream>
#include <string>
using namespace std;
string reverseStr(string str1)
{
    string str = str1;
    long long n = str.length();
    for (long long i = 0; i < n / 2; i++)
        swap(str[i], str[n-i-1]);
    return str;
}
int main() {
    string s;
    cin >> s;
    string scopy = s;
    for (long long i=s.size(); i>0; i--) {
        string ssubstr = s.substr(0,i);
        string rev = reverseStr(s);
        string ssubstr2 = rev.substr(0,i);
        ssubstr2 = reverseStr(ssubstr2);
        scopy = s;
        if (ssubstr==ssubstr2) {
            scopy.erase(s.size()-1, 1);
            scopy.erase(0, 1);
            if (scopy.find(ssubstr) != string::npos) {
                cout << ssubstr << endl;
                return 0;
            }
        }
    }
    cout << "Just a legend" << endl;
}