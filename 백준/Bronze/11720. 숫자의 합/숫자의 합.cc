#include <iostream>

using namespace std;

int main(){
    string num;
    int N;
    int sum=0;
    cin >> N;
    cin >> num;
    for(int i=0; i<N; i++){
        int temp = int(num[i])-48;
        sum = sum + temp;
    }
    cout << sum;
    return 0;
}