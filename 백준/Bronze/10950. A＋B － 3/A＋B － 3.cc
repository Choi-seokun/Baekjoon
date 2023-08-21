#include <iostream>

using namespace std;

int main(){
    int result[10000];
    int t;
    int A,B;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> A >> B;
        result[i] = A+B;
    }

    for(int i=0; i<t; i++){
        cout << result[i]<< endl;
    }

    return 0;
}