#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {


                int animals, length;
                string ans="";
                int oans = 0;
                string A[50]{};
                cin >> animals >> length;
                for (int j=0; j<animals; j++) {cin >> A[j];} //read DNA into A
                for (int j=0; j<length; j++) {
                    int cA=0, cC=0, cG=0, cT=0;
                    for(int k=0; k<animals; k++) {
                        string current = A[k];
                        if (current[j]=='A') {cA++;}else if (current[j]=='C') {cC++;}else if (current[j]=='G') {cG++;}else {cT++;}
                    }

                    if (max(max(cA, cC), max(cG, cT))==cA) {ans+="A"; oans+=animals-cA;}else if (max(max(cA, cC), max(cG, cT))==cC) {ans+="C"; oans+=animals-cC;}else if (max(max(cA, cC), max(cG, cT))==cG) {ans+="G"; oans+=animals-cG;}
                    else {ans+="T"; oans+=animals-cT;}
                }
                cout << ans << endl << oans << endl;

    }
}