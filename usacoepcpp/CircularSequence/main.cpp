#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int x=0; x<N; x++) {
        string seq;
        cin >> seq;
        string ans = seq;
        for (int i=0; i<seq.size(); i++) {
            seq += seq[0];
            seq.erase(0, 1);
            if (seq < ans) {
                ans = seq;}}
        cout << ans << endl;}}