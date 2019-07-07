#include <iostream>
#include <cmath>
using namespace std;
int steps(int x) {
    int stepcount{1};
    while (x != 1) {
        stepcount += 1;
        if (x%2==1) {x = 3*x+1;}
        else if (x%2==0) {x/=2;}
    }
    return stepcount;
}
int main() {
    int i, j;
    while (cin >>i >>j) {
        int swapped{0};
        if (i>j) {swap(i, j);swapped += 1;}
        int maxk{0};
        for (int k = i; k <= j; k++) {
            maxk = max(maxk, steps(k));
        }
        if (swapped == 1) {cout << j << ' ' << i << ' '<< maxk << endl;}
        else {cout << i << ' ' << j << ' '<< maxk << endl;}
    }
}
