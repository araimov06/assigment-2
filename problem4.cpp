#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3,n4,n;
    n=0;
    cin >>n1>>n2>>n3>>n4;
    if (n1==n2){
        n++;
    };
    if (n1==n3){
        n++;
    };
    if (n1==n4){
        n++;
    };
    if (n2==n3 && n2!=n1  ){
        n++;
    };
    if (n2==n4 && n2!=n1){
        n++;
    };
    if (n3==n4 && n2 != n1 && n2 != n3 ){
        n++;
    };
    cout <<n;
    return 0;
};
