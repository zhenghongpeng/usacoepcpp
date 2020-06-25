//#include<iostream>
//#include<cstring>
//using namespace std;
//int H[10][10],V[10][10];
//int N;
//int square(int sqn) {
//    int sqnum=0,iff=0;
//    for(int x=1;x<=N-sqn;x++) {
//        for(int y=1;y<=N-sqn;y++) {
//            for(int i=0;i<sqn;i++)
//                if(H[x][y+i]&&H[x+sqn][y+i]&&
//                   V[x+i][y]&&V[x+i][y+sqn])
//                    iff=1;
//                else {
//                    iff=0;
//                    break;
//                }
//            if(iff)
//                sqnum++;
//        }
//    }
//    return sqnum;
//}
//int main() {
//    int T,TN=1;
//    while(cin>>N>>T) {
//        if(TN>1)
//            cout<<endl<<"**********************************"<<endl<<endl;
//        cout<<"Problem #"<<TN++<<endl<<endl;
//        memset(H,0,sizeof(H));
//        memset(V,0,sizeof(V));
//        while(T--) {
//            char hv;
//            int x,y;
//            cin>>hv>>x>>y;
//            if(hv=='H')
//                H[x][y]=1;
//            else
//                V[y][x]=1;
//        }
//        int num;
//        int ifn=0;
//        for(int i=1;i<=N;i++) {
//            num = square(i);
//            if(num) {
//                cout<<num<<" square (s) of size "<<i<<endl;
//                ifn++;
//            }
//        }
//        if(!ifn)
//            cout<<"No completed squares can be found."<<endl;
//    }
//    return 0;
//}
//


