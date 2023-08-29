//1, 2, 3 더하기
#include <iostream>
#include <vector>
#include <algorithm> // sort사용
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T, n;
    cin >> T;
    int arr[11] = {};
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    for(int i=4; i<11; i++){
        arr[i] = arr[i-3] + arr[i-2] + arr[i-1];
    }

    for(int i=0; i<T; i++){
        cin >> n;
        cout << arr[n] << "\n";
    }
}