#include <iostream>

using namespace std;

int a = 1;
char s = 'a';
string str = "avengers";
double b = 1.223123;

int main(){
    printf("i am ironman : %d\n", a);
    printf("i am ironman : %c\n", s);
    printf("i am ironman : %s\n", str.c_str());
    printf("i am ironman : %s\n", str);
    printf("i am ironman : %lf\n", b);

    return 0;
}