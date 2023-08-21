#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ascendingcount=0, descendingcount=0;
    int arr[8];
    for(int i=0; i<8; i++){
        cin >> arr[i];
    }
    for(int i=0; i<8; i++){
        if(arr[i] == (i+1)){
            ascendingcount++;
        }
        if(arr[i] == (9-(i+1))){
            descendingcount++;
        }
    }
    if(ascendingcount==8){
        cout<< "ascending";
    }
    if(descendingcount==8){
        cout<< "descending";
    }
    if(descendingcount!=8 && ascendingcount!=8){
        cout<< "mixed";
    }
}