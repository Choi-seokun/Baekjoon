//벌집
#include <iostream>
#include <vector>
#include <algorithm> // sort사용

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int temp=0;
    int N, count=1;
    cin >> N;
    N = N-1;
    for(int i=0; true; i++){
        temp += 6*i;
        if(N <= temp){
            break;
        }else{
            count++;
        }    
    }
    cout << count;
}