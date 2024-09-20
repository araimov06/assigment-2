#include <iostream>
using namespace std;

int main(){
    float n1, n2;
    char s;
    cin >> n1>>s>>n2;
    if (s=='+'){
        cout << (n1+n2);
    };
    if (s=='-'){
        cout << (n1-n2);
    };
    if (s=='/'){
        cout << (n1/n2);
    };
    if (s=='*'){
        cout << (n1*n2);
    };
    return 0;
};
