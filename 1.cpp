// cin -- space, enter까지만
// >> getline
#include <iostream>

using namespace std;

int T;
string s;

int main(){
    
    cin >> T;
    //string bufferflush;
    //getline(cin, bufferflush);
    cin.ignore();

    for(int i=0; i<T; i++){
        getline(cin, s);
        cout << s << "\n";
    }

    return 0;
}