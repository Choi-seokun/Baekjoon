//블랙잭
#include <iostream>
#include <string> // getline사용
#include <algorithm> // sort사용

using namespace std;

int main()
{
    int N, M;
    int arr[100];
    int max = 0;
    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            for(int k=0; k<N; k++){
                if((i!=j && j!=k && i!=k) && (arr[i]+arr[j]+arr[k]<=M)){
                    if(max < arr[i]+arr[j]+arr[k]){
                    max = arr[i]+arr[j]+arr[k];
                    }
                }
            }
        }
    }
    cout << max;
}