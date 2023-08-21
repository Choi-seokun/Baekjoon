#include <iostream>

using namespace std;

int main(){
    int i;
    cin >> i;
    if(90<=i && i<=100){
        cout << "A";
    }
    if(80<=i && i<=89){
        cout << "B";
    }
    if(70<=i && i<=79){
        cout << "C";
    }
    if(60<=i && i<=69){
        cout << "D";
    }
    if(i<60){
        cout << "F";
    }
    return 0;
}
  