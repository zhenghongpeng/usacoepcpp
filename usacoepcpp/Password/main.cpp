//#include <iostream>
//#include <string>
//using namespace std;
//int borlens[1000007];
//int borlen(int i, string s) {
//    if (i==0) {return -1;}
//    if (s[i]==s[borlens[i-1]]) {
//        return borlens[i-1]+1;
//    }
//    else {
//        if (s[i]==s[0]) {return 1;}
//        return 0;
//    }
//}
//int main() {
//    string s;
//    cin >> s;
//    string scopy = s;
//    for (int i=0; i<s.size(); i++) {
//        borlens[i]=borlen(i, s);
//    }
//    for (int i=borlens[s.size()-1]; i>=0; i--) {
//        if (s.substr(0, i)!=s.substr(s.size()-i)) {continue;}
//        if (i==0) {cout << "Just a legend"; return 0;}
//        for (int j=0; j<s.size()-1; j++) {
//            if (borlens[j]==i) {
//                cout << s.substr(0, i) << endl;
//                return 0;
//            }
//        }
//    }
//}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#define MAX 1000007

using namespace std;

char s[MAX];
int nnext[MAX];
int hhash[MAX];

void kmp ( int n )
{
    memset ( nnext , 0 , sizeof ( nnext ) );
    for ( int i = 2 ; i <= n ; i++ )
    {
        int k = nnext[i-1];
        while ( k && s[k+1] != s[i] ) k = nnext[k];
        if ( s[k+1] == s[i] ) nnext[i]=k+1;
    }
}

int main ( )
{
    while ( cin >> s+1 )
    {
        int n = strlen ( s+1 );
        kmp ( n );
        memset ( hhash , 0  , sizeof ( hhash ) );
        for ( int i = 2; i < n ; i++ )
            hhash[nnext[i]] = 1;
        int x = nnext[n];
        while ( !hhash[x] && x ) x = nnext[x];
        if ( !x ) printf ( "Just a legend" );
        else for ( int i = 1 ; i <= x ; i++ )
                printf ( "%c" , s[i] );
        puts ( "" );
    }

}