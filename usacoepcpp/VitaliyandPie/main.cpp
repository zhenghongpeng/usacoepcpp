#include <iostream>
#include <string>
using namespace std;
int main() {
    int N; cin >> N; string seq; cin >> seq; int ckeys[26]{}; int bought{0};
    for (int i=0; i<N; i++) {
        ckeys[seq[0]-'a']+=1;
        seq.erase(0, 1);
        if (ckeys[seq[0]-'A']!=0) {
            ckeys[seq[0]-'A']-=1;
        }
        else {
            bought+=1;
        }
        seq.erase(0, 1);
    }
    cout << bought << endl;
}