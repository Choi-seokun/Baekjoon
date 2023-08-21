#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num[10];
    int trash[10];
    int count=0;
    for(int i=0; i<10; i++){
        cin >> num[i];
    }
    for(int i=0; i<10; i++){
        trash[i] = num[i]%42;
        for(int x=0; x < i; x++){
            if(trash[x] == trash[i]){
               count++;
               break;
            }
        }
    }
    cout << (10-count);
}