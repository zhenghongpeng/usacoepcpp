#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
using namespace std;

typedef long long LL;
#define f first
#define s second
#define pb push_back
int B[];
int N;
void segTree(int A[], int n) {
    N=n;
    B = new int[2*N];
    for (int i=0; i<N; i++) B[N+i]=A[i];
    for (int i=N-1; i>0; i--) B[i] = B[i<<1]+B[i<<1|1];
}
void update(int ind, int val) {
    B[N+ind]=val;
    for (int i=N+ind; i>1; i>>=1) B[i>>1] = B[i] + B[i^1];
}
int sum(int l, int r) {
    r+=1;int res=0;
    for (l += N, r += N; l < r; l >>= 1, r >>= 1) {
        if ((l&1)>0) res+=B[l++];
        if ((r&1)>0) res+=B[--r];
    }
    return res;
}
int main() {
    ifstream in("foo.in");
    ofstream out("foo.out");
    cin >> N;
    return 0;
}