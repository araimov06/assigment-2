#include <iostream>
using namespace std;
int main() {
    bool winter, rain;
    cin >> winter>>rain;
    if (winter){
        cout << "Bus";
    }else if(rain) {
        cout << "Walk";
    }else{
        cout<<"Bike";
    }
    return 0;
}
