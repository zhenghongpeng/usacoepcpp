#include <iostream>
#include <string>
using namespace std;
bool et2(string i1, string i2) {
    string i11=i1.substr(0, i1.size()/2);
    string i12=i1.substr(i1.size()/2);
    string i21=i2.substr(0, i1.size()/2);
    string i22=i2.substr(i1.size()/2);
    if ((i11==i21 && i12==i22) ||
        (i11==i22 && i12==i21)) {return true;}
    else if (i11.size()==0) {return false;}
    else {return ((et2(i11, i22) && et2(i12, i21)) ||
                    (et2(i11, i21) && et2(i12, i22)));}
}
#include <iostream>
#include <string>
using namespace std;
bool et3(string i1, string i2) {
    if (i1 == i2) return true;
    if (i1.size()%2==1) {return false;}
    if (i1.size() != i2.size()) return false;
    string i11=i1.substr(0, i1.size()/2);
    string i12=i1.substr(i1.size()/2);
    string i21=i2.substr(0, i1.size()/2);
    string i22=i2.substr(i1.size()/2);
    if ((i11==i21 && i12==i22) ||
        (i11==i22 && i12==i21)) {return true;}
    else {return ((et3(i11, i22) && et3(i12, i21)) ||
                  (et3(i11, i21) && et3(i12, i22)));}
}
int main() {
    string i1, i2;
    cin >> i1 >> i2;
    if (et3(i1, i2)) {
        cout << "YES" << endl;
        return 0;}
    cout << "NO" << endl;}
