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
//        cout << box[j].first << " "<< box[j].second << " "<<j <<endl;
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



struct face{
    int x, y;
}a[6];
bool check()
{
    if(memcmp(a, a+1, sizeof(face)) || memcmp(a+2, a+3, sizeof(face)) || memcmp(a+4, a+5, sizeof(face))) return false;
    if(a[0].x!=a[2].x || a[0].y!= a[4].x || a[2].y!=a[4].y) return false;
    return true;
}
int main2()
{
    while(cin >> a[0].x >> a[0].y >> a[1].x >> a[1].y >> a[2].x >> a[2].y >> a[3].x >> a[3].y >> a[4].x >> a[4].y >> a[5].x >> a[5].y){
        for(int i = 0; i < 6; ++i)
            if(a[i].x < a[i].y)
                swap(a[i].x, a[i].y);
        sort(a, a+6, [](const face a, const face b) {return a.x==b.x ? (a.y > b.y) : (a.x > b.x);});
        printf("%s\n", check() ? "POSSIBLE" : "IMPOSSIBLE");
    }
//    return 0;
}


int main(){
    main2();
    return 0;
}