#include <iostream>
using namespace std;
int main() {
    while (true) {
        int N, m, k;
        cin >> N >> k >> m;
        if (N == 0) break;
        bool flag[21] = {false};
        int p1 = 1, p2 = N;
        int left = N;
        while (left>0) {
            int step = 0;
            while (true) {
                if (flag[p1] == false) {
                    step++;
                    if (step == k) {
                        break;
                    }
                }
                p1++; if (p1==N+1) p1=1;
            }
            step = 0;
            while (true) {
                if (flag[p2] == false) {
                    step++;
                    if (step == m) {
                        break;
                    }
                }
                p2--; if (p2==0) p2=N;
            }
            int dp1=to_string(p1).length();
            int dp2=to_string(p2).length();
            for (int nspaces=0; nspaces<3-dp1; nspaces++) {
                cout << " ";
            }
            cout << p1;
            if (p1!=p2) {
                for (int nspaces=0; nspaces<3-dp2; nspaces++) {
                    cout << " ";
                }
                cout << p2;
            }

            flag[p1] = flag[p2] = true;
            left--;
            if (p1!=p2) left--;
            if (left>0) {cout << ",";}
        }
        cout << endl;
    }
}
