#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool twoinstr(string suc1, string suc2) {
    string s1 = suc1, s2 = suc2;
    while (s1.size() < s2.size()) {s1 += "1";}
    while (s1.size() > s2.size()) {s2 += "1";}
    for (int i=0; i<s1.size(); i++) {
        if (s1[i]=='2' && s2[i]=='2') {
            return true;
        }
    }
    return false;
}
int main() {
    string omaster, odriven;
    while (cin >> omaster >> odriven) {
        int ans1, ans2, ans;
        string master{omaster}, driven{odriven};
        while (twoinstr(master, driven)) {driven.insert(0, "1");}
        ans1 = max(driven.size(), master.size());
        master = omaster;
        driven = odriven;
        while (twoinstr(master, driven)) {master.insert(0, "1");}
        ans2 = max(driven.size(), master.size());
        ans = min(ans1, ans2);
        cout << ans << endl;
    }
}