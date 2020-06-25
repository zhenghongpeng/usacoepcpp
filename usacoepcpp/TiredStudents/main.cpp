#include <iostream>
using namespace std;
int N = 10000000;
int a[15], b[15], c[15];
int n;
int main() {

    int cases=0;
    while (cin >> n) {
        cases++;
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i] >> c[i];
        }
        int t, count;
        for (t=1; t<N; t++) {
            count=0;
            for (int i=0; i<n; i++) {
                if (c[i] <= a[i]) { count++; }
            }
            if (count == n) break;
            for (int i=0; i<n; i++) {
                if (c[i]==a[i]+b[i] || (c[i]==a[i] && count>=n-count)) {
                    c[i] = 0;
                }
                c[i]++;
            }
        }
        if (t==N) {t=-1;}
        cout << "Case " << cases << ": " << t << endl;
    }
    return 0;
}
