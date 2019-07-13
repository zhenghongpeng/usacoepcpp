#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        int score = 0;
        int marker = 0;
        string ans;
        cin >> ans;
        for (auto c : ans) {
            if (c == 'O') {
                marker++;
                score+=marker;
            }
            else {
                marker = 0;
            }
        }
        cout << score << endl;
    }
}