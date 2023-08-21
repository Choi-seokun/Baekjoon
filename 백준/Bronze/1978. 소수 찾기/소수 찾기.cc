//소수 찾기
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    int arr[1000];
    int count = 0;
    int no = 0;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> arr[i];
        if(arr[i]==1){
            no=1;
        }
        for(int x=2; x < arr[i]; x++){
            if(arr[i]%x == 0){
                no=1;
            }
        }
        if(no!=1){
            count++;
        }
        no = 0;
    }
    cout << count;
}