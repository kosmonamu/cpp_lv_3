#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> a = {1,2,3};
    cout << a.size() - 10 << "\n";

    cout << int(a.size())-10 << "\n";

    return 0;
}