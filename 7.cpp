#include <iostream>
#include <vector>

using namespace std;

vector<string> split(string input, string delimiter){
    vector<string> ret;
    long long pos = 0;
    string token = "";
    
    //string::npos : size_t 타입의 최대값
    //find 해당 문자열을 못 찾을 경우 string::npos를 반환
    while((pos = input.find(delimiter)) != string::npos){
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos+delimiter.length());
    }
    ret.push_back(input);
    return ret;
}

int main(){
    string s = "red blue green yellow", d = " ";
    vector<string> a = split(s,d);
    for(string b : a) cout << b << "\n";
}