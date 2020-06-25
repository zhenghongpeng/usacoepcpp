#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int A[100002];
int B[100002];
int N, Q;
int binarySearch(int arr[], int value, int left, int right) {
    while (left <= right) {
        int middle = (left + right) / 2;
        if (arr[middle] == value) {return middle;}
        else if (arr[middle] > value) {right = middle - 1;}
        else {left = middle + 1;}
    }
    return -1;
}
int main() {
    cin >> N >> Q;
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    for (int i=0; i<Q; i++) {
        int X, Y;
        for (int i=0; i<N; i++) {
            B[i] = A[i];
        }
        cin >> X >> Y;
        cout << X << " " << Y << endl;

        B[N] = X;
        B[N+1] = Y;
        sort(B, B+N+2);
        int a = binarySearch(B, X, 0, N+2);
        int b = binarySearch(B, Y, 0, N+2);
        cout << b-a+1 << endl;
    }
}
