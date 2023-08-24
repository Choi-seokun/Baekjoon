//스택 수열
#include <iostream>
#include <vector>
#include <algorithm> // sort사용

using namespace std;

class mystack{
    int arr[100000] = {};
    int end = 0;
    public :
        void push(int i){
            arr[end] = i;
            end++;
        }
        int pop(){
            if(end == 0){
                return -1;
            }
            end--;
            return arr[end];
        }
        int back(){
            if(end == 0){
                return -1;
            }
            return arr[end-1];
        }
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> arr;
    mystack s;
    int N, temp;
    vector<char> pm;
    cin >> N;

    
    for(int i=0; i<N; i++){
        cin >> temp;
        arr.push_back(temp);
    }

    for(int x=1, y=0, z=0; y<N; x++){
        s.push(x);
        pm.push_back('+');
        z++;
        while(s.back() == arr[y]){
            s.pop();
            pm.push_back('-');
            z++;
            y++;
        }
        if(z > (2*N)){
            cout << "NO" << "\n";
            return 0;
        }
    }

    for(int i=0; i < pm.size(); i++){
        cout << pm[i] << "\n";
    }
}