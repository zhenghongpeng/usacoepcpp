#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        int inp;
        cin >> inp;
        int ans=0;
        string inpstr = to_string(inp);
        for (int j=inp-9*sizeof(inpstr); j<inp; j++) {
            int jcopy = j, jcopy2 = j;
            for (int i=1; i<8; i++) {
                jcopy += jcopy2 % 10;
                jcopy2 /= 10;
            }
            if (jcopy == inp) {
                ans = j;
                cout << ans << endl;
                break;
            }
            if (j==inp-1) {
                cout << "0" << endl;
            }
        }
    }
}