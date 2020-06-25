#include <iostream>
#include <string>
using namespace std;
string rot1(string s) {
    char s0=s[0], s1=s[1], s4=s[4], s5=s[5];
    s[1]=s0, s[0]=s4, s[4]=s5, s[5]=s1;
    return s;
}
string rot2(string s) {
        char s1=s[1], s2=s[2], s3=s[3], s4=s[4];
        s[1]=s2, s[2]=s4, s[3]=s1, s[4]=s3;
        return s;
}
string rot3(string s) {
    char s0=s[0], s2=s[2], s3=s[3], s5=s[5];
    s[3]=s0, s[5]=s3, s[2]=s5, s[0]=s2;
    return s;
}
//string rot4(string s) {
//    char s0=s[0], s1=s[1], s2=s[2], s3=s[3], s4=s[4], s5=s[5];
//    s[2]=s0, s[0]=s1, s[4]=s3, s[3]=s5, s[1]=s2, s[5]=s4;
//    return s;
//}
//string rot5(string s) {
//    char s0=s[0], s1=s[1], s2=s[2], s3=s[3], s4=s[4], s5=s[5];
//    s[4]=s0, s[2]=s1, s[0]=s3, s[3]=s4, s[5]=s2, s[1]=s5;
//    return s;
//}
//string rot6(string s) {
//    char s0=s[0], s1=s[1], s2=s[2], s3=s[3], s4=s[4], s5=s[5];
//    s[3]=s0, s[0]=s1, s[1]=s3, s[5]=s4, s[4]=s2, s[2]=s5;
//    return s;
//}
//string rot7(string s) {
//    char s0=s[0], s1=s[1], s2=s[2], s3=s[3], s4=s[4], s5=s[5];
//    s[3]=s1, s[0]=s2, s[4]=s0, s[5]=s3, s[2]=s4, s[1]=s5;
//    return s;
//}
//string rot11(string s) {
//    char s0=s[0], s1=s[1], s2=s[2], s3=s[3], s4=s[4], s5=s[5];
//    s[2]=s1, s[1]=s2, s[3]=s4, s[4]=s3, s[5]=s0, s[0]=s5;
//    return s;
//}
//string rot12(string s) {
//    char s0=s[0], s1=s[1], s2=s[2], s3=s[3], s4=s[4], s5=s[5];
//    s[2]=s0, s[0]=s2, s[1]=s4, s[4]=s1, s[5]=s3, s[3]=s5;
//    return s;
//}
//string rot13(string s) {
//    char s0=s[0], s1=s[1], s2=s[2], s3=s[3], s4=s[4], s5=s[5];
//    s[2]=s3, s[3]=s2, s[0]=s4, s[4]=s0, s[5]=s1, s[1]=s5;
//    return s;
//}
//string rot14(string s) {
//    char s0=s[0], s1=s[1], s2=s[2], s3=s[3], s4=s[4], s5=s[5];
//    s[2]=s4, s[4]=s2, s[1]=s3, s[3]=s1, s[5]=s0, s[0]=s5;
//    return s;
//}
int main() {
    string itotal;
    while (cin >> itotal) {
        string i1 = itotal.substr(0, itotal.size() / 2);
        string i2 = itotal.substr(itotal.size() / 2);
        string i1c = i1;
        bool found = false;
        for (int a=0; a<4; a++) {
            if (found) {break;}
            for (int x=0; x<a; x++) {i1c = rot1(i1c);}
            for (int b=0; b<4; b++) {
                if (found) {break;}
                for (int x=0; x<b; x++) {i1c = rot2(i1c);}
                for (int c=0; c<4; c++) {
                    if (found) {break;}
                    for (int x=0; x<c; x++) {i1c = rot3(i1c);}
                    if (i1c==i2) {cout << "TRUE" << endl; found = true;}
                    else if (a==3 && b==3 && c==3) {cout << "FALSE" << endl;}
                }
            }
        }
//        if (i1==i2) {cout << "TRUE" << endl;}
//        else if (rot1(i1) == i2 ||
//            rot1(rot1(rot1(i1))) == i2 ||
//            rot1(rot1(rot1(rot1(i1)))) == i2) { cout << "TRUE" << endl; }
//        else if (rot2(i1) == i2 ||
//                 rot2(rot2(rot2(i1))) == i2 ||
//                 rot2(rot2(rot2(rot2(i1)))) == i2) { cout << "TRUE" << endl; }
//        else if (rot3(i1) == i2 ||
//                 rot3(rot3(rot3(i1))) == i2 ||
//                 rot3(rot3(rot3(rot3(i1)))) == i2) { cout << "TRUE" << endl; }
//        else if (rot4(i1) == i2 ||
//                    rot4(rot4(i1)) == i2) {cout << "TRUE" << endl;}
//        else if (rot5(i1) == i2 ||
//                 rot5(rot5(i1)) == i2) {cout << "TRUE" << endl;}
//        else if (rot6(i1) == i2 ||
//                 rot6(rot6(i1)) == i2) {cout << "TRUE" << endl;}
//        else if (rot11(i1) == i2) {cout << "TRUE" << endl;}
//        else if (rot12(i1) == i2) {cout << "TRUE" << endl;}
//        else if (rot13(i1) == i2) {cout << "TRUE" << endl;}
//        else if (rot14(i1) == i2) {cout << "TRUE" << endl;}
    }
}