#include <iostream>
#include <cstdlib>
using namespace std;
int main() {

    string line;
    while (getline(cin,  line))
    {


        if (cin.fail())
        {
            cin.putback('\n');
            break;
        }


        cout << line << endl;
        cin.seekg(-1,ios_base::end);    // go to one position before the EOF
        char c;
        cin.get(c);                     // Read current characterif(c=='\n')
        cout<<c<<endl;           // You have new_line character


    }
    cin.seekg(-1,ios_base::end);    // go to one position before the EOF
    char c;
    cin.get(c);                     // Read current characterif(c=='\n')
    cout<<c<<endl;           // You have new_line character


    return 0;
}