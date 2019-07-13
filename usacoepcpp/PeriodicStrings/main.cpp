#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        string x;
        cin >> x;
        int sx = x.size();
        for (int i=1; i<=sx; i++) {
            if (sx%i==0) {
                string repeated = "";
                string rcopy = "";
                for (int j=0; j<i; j++) {
                    repeated.push_back(x[j]);
                    rcopy.push_back(x[j]);
                }
                for (int j=1; j<sx/i; j++) {
                    for (auto c : rcopy) {
                        repeated.push_back(c);
                    }
                }
                if (repeated == x) {
                    if (i!=N-1) {
                        cout << endl;
                        cout << i << endl;
                    }
                    else {
                        cout << endl;
                        cout << i <<endl;
                    }
                    break;
                }
            }
        }
    }
}