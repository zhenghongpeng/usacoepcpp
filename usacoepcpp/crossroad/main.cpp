#include <iostream>
#include <fstream>
#include <cmath>
#include<algorithm>
#include<stdlib.h>
#include <map>
#include <vector>
using namespace std;
int main() {
    ifstream fin ("diamond.in");
    ofstream fout ("diamond.out");
    int N;
    int A[100][2], B[100];
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> A[i][0] >> A[i][1];
    }
    map<int, int> log;
    for (int i=0; i<N; i++) {
        log[A[i][0]] = vector<int>;
    }
    for (int i=0; i<N; i++) {
        log[A[i][0]].push_back(A[i][1]);
    }
    return 0;
}