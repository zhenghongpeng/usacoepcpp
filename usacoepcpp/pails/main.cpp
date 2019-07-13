#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fin ("pails.in");
    ofstream fout ("pails.out");
    int X, Y, M;
    fin >> X >> Y >> M;
    for (int i=M; i>0; i--) {
        for (int x=0; x<=M/X; x++) {
            for (int y=0; y<=M/X; y++) {
                if (X*x+Y*y==i) {
                    fout << i << endl;
                    return 0;
                }
            }
        }
    }
}