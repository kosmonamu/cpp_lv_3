#include <iostream>

using namespace std;

int main(){
    string s1 = "BlockDMask";
    string s2 = "2019";
    string s3 = "2019BlockDMask";
    string s4 = "BlockDMask2019";

    //int atoi (const char * str)
    //std::string c_str()
    //반환형이 char * 이므로, 해당하는 string의 첫번재 문자의 주소값(포인터)를 반환
    cout << atoi(s1.c_str()) << "\n";
    cout << atoi(s2.c_str()) << "\n";
    cout << atoi(s3.c_str()) << "\n";
    cout << atoi(s4.c_str()) << "\n";
    
    return 0;
}