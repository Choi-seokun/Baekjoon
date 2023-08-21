#include <iostream>

using namespace std;

int main(){
    int arr[1000000];
    int N;
    cin >> N;
    int max, min;
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    max = arr[0];
    min = arr[0];
    for(int i=1; i<N; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << min << " " << max;
}