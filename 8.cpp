#include <iostream>

using namespace std;

int main(){
    string s1 = "BlockDMask";
    string s2 = "2019";
    string s3 = "2019BlockDMask";
    string s4 = "BlockDMask2019";

    cout << atoi(s1.c_str()) << "\n";
    cout << atoi(s2.c_str()) << "\n";
    cout << atoi(s3.c_str()) << "\n";
    cout << atoi(s4.c_str()) << "\n";
    
    return 0;
}