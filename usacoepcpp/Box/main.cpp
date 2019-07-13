#include <iostream>
#include <algorithm>
using namespace std;


int main1() {

    int A[1000], B[1000];
    int j{0};

    pair<int, int> box[1000];
    while (cin >> A[j] >> B[j]) {
        if (A[j] > B[j]) { swap(A[j], B[j]); }
        box[j] = make_pair(A[j] , B[j]);
        cout << box[j].first << " "<< box[j].second << " "<<j <<endl;
        j++;
    }


    for (int i=0; i< j;i=i+6){
        sort(box+i, box+6+i);

            if (box[i+0].first == box[i+1].first && box[i+1].first == box[i+2].first && box[i+2].first == box[i+3].first
               &&
               box[i+0].second == box[i+1].second && box[i+4].first == box[i+5].first && box[i+4].first == box[i+0].second
               &&
               box[i+2].second == box[i+3].second && box[i+4].second == box[i+3].second  && box[i+4].second == box[i+5].second)
                cout << "POSSIBLE" << endl;
            else
                cout << "IMPOSSIBLE" << endl;

        }

    }

int main(){
    main1();
    return 0;
}