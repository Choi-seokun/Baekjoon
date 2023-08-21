#include <iostream>
#include <string>

using namespace std;

int main(){
    int A,B,C;
    int count[10] = {};
    cin >> A;
    cin >> B;
    cin >> C;
    string num = to_string(A*B*C);
    for(int i=0; i < num.length(); i++){
        if(num[i] == '0'){
            count[0]++;
        }
        if(num[i] == '1'){
            count[1]++;
        }
        if(num[i] == '2'){
           count[2]++;
        }
        if(num[i] == '3'){
            count[3]++;
        }
        if(num[i] == '4'){
           count[4]++;
        }
        if(num[i] == '5'){
           count[5]++;
        }
        if(num[i] == '6'){
            count[6]++;
        }
        if(num[i] == '7'){
            count[7]++;
        }
        if(num[i] == '8'){
            count[8]++;
        }
        if(num[i] == '9'){
            count[9]++;
        }
    }
    cout << count[0] << endl;
    cout << count[1] << endl;
    cout << count[2] << endl;
    cout << count[3] << endl;
    cout << count[4] << endl;
    cout << count[5] << endl;
    cout << count[6] << endl;
    cout << count[7] << endl;
    cout << count[8] << endl;
    cout << count[9] << endl;
}