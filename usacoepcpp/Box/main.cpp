#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int A[6], B[6];
    pair<int, int> box[6];
    for (int i=0; i<6; i++) {
        cin >> A[i] >> B[i];
        if (A[i] < B[i]) {swap(A[i], B[i]);}
        box[i] = make_pair(A[i], B[i]);
    }
    sort(box, box+6);
    reverse(box, box+6);
    for (int i=0; i<6; i++) {
        cout << box[i].first << " " << box[i].second << endl;
    }
        if (box[0].first == box[1].first && box[1].first == box[2].first && box[2].first == box[3].first
           &&
           box[0].second == box[1].second && box[4].first == box[5].first && box[4].first == box[0].second
           &&
           box[2].second == box[3].second && box[4].second == box[3].second  && box[4].second == box[5].second)
            cout << "POSSIBLE" << endl;
        else
            cout << "IMPOSSIBLE" << endl;
    return 0;
}