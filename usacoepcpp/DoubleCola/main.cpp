#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n==1) {cout << "Sheldon"<< endl; return 0;}
    if (n==2) {cout << "Leonard"<< endl; return 0;}
    if (n==3) {cout << "Penny"<< endl; return 0;}
    if (n==4) {cout << "Rajesh"<< endl; return 0;}
    if (n==5) {cout << "Howard"<< endl; return 0;}
    long long A[36];
    for (long long i=1; i<=36; i++) {
        A[i-1] = 5*pow(2, i)-5;
    }
    for (long long i=1; i<=35; i++) {
        if (A[i-1]<n && n<=A[i]) {
            n-=A[i-1];
            long double x = (long double)(n)/pow(2, i)-.000001;
            if (ceil(x)==1) {cout << "Sheldon"<< endl;}
            if (ceil(x)==2) {cout << "Leonard"<< endl;}
            if (ceil(x)==3) {cout << "Penny"<< endl;}
            if (ceil(x)==4) {cout << "Rajesh"<< endl;}
            if (ceil(x)==5) {cout << "Howard"<< endl;}
            break;
        }
    }
}