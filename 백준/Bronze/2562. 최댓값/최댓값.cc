#include <iostream>

using namespace std;

int main(){
    int num[9];
    int max;
    int index = 1;
    
    for(int i=0; i<9; i++){
        cin >> num[i];
    }

    max = num[0];
    for(int i=1; i<9; i++){
        if(max < num[i]){
            max = num[i];
            index = i+1;
        }
    }    
    cout << max << endl;
    cout << index;
}