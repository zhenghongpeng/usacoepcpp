#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main() {
    ifstream fin ("lostcow.in");
    ofstream fout ("lostcow.out");
    long long X, Y, ans{0}, by{1}, dir{1};
    fin >> X >> Y;
    while (true) {
        if (((dir == 1) && (X<=Y) && (Y<=X+by)) || ((dir == -1) && (X>=Y) && (Y>=X-by))) {
            ans += abs(Y-X);
            fout << ans << endl;
            break;
        }
        ans += by*2;
        by *= 2;
        dir *= -1;
    }
    return 0;
}