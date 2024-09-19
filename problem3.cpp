#include <iostream>
using namespace std;
int main() {
    char sex;
    float n;
    cin>>sex>>n;
    if (sex=='M'){
        if (n>=1.85){
            cout << "Tall";
        }else if(n>=1.7){
            cout <<"Normal";
        }else{
            cout <<"Short";
        }
        
    }else{
        if (n>=1.75){
            cout << "Tall";
        }else if(n>=1.6){
            cout <<"Normal";
        }else{
            cout <<"Short";
        };
    }
    return 0;
}
