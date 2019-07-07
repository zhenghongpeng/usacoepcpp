#include <iostream>



int main() {
    std::cout << "Hello, World!" << std::endl;
    int N, A[100], B[100];
    string T[100];

    ifstream fin ("1.in");
    fin >> N;
    for (int i=0; i<N; i++) fin >> T[i] >> A[i] >> B[i];

    ofstream fout ("traffic.out");
    return 0;
}