#include <iostream>
#include <algorithm>
using namespace std;

int N,M,C;
int t[100000];

bool pos(int wait)
{
    int buses = 1;
    int fA = t[0];
    int fI = 0;
    for(int i=1;i<N;i++)
    {
        if(t[i] - fA > wait || i + 1 - fI > C)
        {
            buses += 1;
            fA = t[i];
            fI = i;
        }
    }
    return (buses <= M);
}

int binSearch(int L,int H)
{
    if(L == H) return L;
    if(L + 1 == H)
    {
        if(pos(L)) return L;
        return H;
    }
    int mid = (L+H)/2;
    if(pos(mid)) return binSearch(L,mid);
    else return binSearch(mid+1,H);
}

int main()
{
    cin >> N >> M >> C;
    for(int i=0;i<N;i++)
        cin >> t[i];
    sort(t,t+N);
    cout << binSearch(0, 1000000000) << '\n';
}