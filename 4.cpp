#include <iostream>

using namespace std;

int main(){
    string a = "love is";
    a += " pain!";
    a.pop_back();

    cout << a << " : " << a.size() << "\n";

    //begin() : 첫번쨰 요소를 가리키는 이터레이터를 반환
    cout << char(*a.begin()) << "\n";
    cout << char(*(a.end()-1)) << "\n";

    // string& insert (size_t pos, const string& str);
    a.insert(0, "test ");
    cout << a << " : " << a.size() << "\n";

    // string& erase (size_t pos = 0, size_t len = npos);
    a.erase(0, 5);
    cout << a << " : " << a.size() << "\n";

    auto it = a.find("love");
    if(it != string::npos){
        cout << "포함되어 있다." << "\n";
    }

    cout << it << "\n";
    cout << string::npos << "\n";

    cout << a.substr(5,2) << "\n";

    // 참조자
    int x = 10; // 변수의 선언
    int& y = x; // 참조자 선언

    cout << "x : " << x << ", y : " << y << endl;

    y++;        // 참조자를 이용한 증가 연산

    cout << "x : " << x << ", y : " << y << endl;

    cout << "x의 주소값 : " << &x << ", y의 주소값 : " << &y;
    
    return 0;
}