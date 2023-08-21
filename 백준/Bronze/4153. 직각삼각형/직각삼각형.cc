//직각삼각형
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int arr[3];
    for( ; true; ){
        for(int i=0; i<3; i++){
            cin >> arr[i];   
        }
        if(arr[0] == 0 && arr[0] == 0 && arr[0] == 0){
            return 0;
        }
        sort(arr, arr+3);
        if((arr[2]*arr[2]) == ((arr[1]*arr[1]) + (arr[0]*arr[0]))){
            cout << "right"<<endl;
        }else{
            cout << "wrong"<<endl;
        }
    }
}