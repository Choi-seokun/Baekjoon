//집합
#include <iostream>
#include <vector>
#include <algorithm> // sort사용

using namespace std;
class test{
    int arr[21] = {};

    public :
        void add(int x){
            if(arr[x] == x){
                return;
            }
            if(arr[x] == 0){
                arr[x] = x;
                return;
            }
        }

        void remove(int x){
            if(arr[x] == x){
                arr[x] = 0;
                return;
            }
            if(arr[x] == 0){
                return;
            }
        }

        int check(int x){
            if(arr[x] == x){
                return 1;
            }
            if(arr[x] == 0){
                return 0;
            }

        }

        void toggle(int x){
            if(arr[x] == x){
                arr[x] = 0;
                return;
            }
            if(arr[x] == 0){
                arr[x] = x;
                return;
            }
        }

        void all(){
            for(int i=1; i<=20; i++){
                arr[i] = i;
            }
        }

        void empty(){
            for(int i=1; i<=20; i++){
                arr[i] = 0;
            }
        }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test a;
    int M, x=0;
    string temp;
    cin >> M;
    for(int i=0; i<M; i++){
        cin >> temp;
        if(temp == "add"){
            cin >> x;
            a.add(x);
        }
        if(temp == "remove"){
            cin >> x;
            a.remove(x);
        }
        if(temp == "check"){
            cin >> x;
            cout << a.check(x) << "\n";
        }
        if(temp == "toggle"){
            cin >> x;
            a.toggle(x);
        }
        if(temp == "all"){
            a.all();
        }
        if(temp == "empty"){
            a.empty();
        }
    }
}