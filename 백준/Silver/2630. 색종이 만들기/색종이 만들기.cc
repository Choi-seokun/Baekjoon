//색종이 만들기
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N = 0, blue = 0, white = 0, count1=0, count2=0;
    int arr[128][128] = {};
    bool check[128][128] = {};
    cin >> N;
    
    for(int i=0; i<N; i++){
        for(int x=0; x<N; x++){
            cin >> arr[i][x];
        }
    }
    
    for(int i=N; i>=1; i=i/2){
        for(int a=0; a<N; a+=i){
            for(int b=0; b<N; b+=i){
                for(int y=0; y<i; y++){
                    for(int x=0; x<i; x++){
                        if(check[y+a][x+b] == true){
                            count1=1;
                            count2=1;
                            break;
                        }
                        if(arr[y+a][x+b] == 0){
                            count1++;
                        }
                        if(arr[y+a][x+b] == 1){
                            count2++;
                        }
                    }
                }
                if(count1==0){
                    blue++;
                    for(int y=0; y<i; y++){
                        for(int x=0; x<i; x++){
                            check[y+a][x+b] = true;
                        }
                    }
                }
                if(count2==0){
                    white++;
                    for(int y=0; y<i; y++){
                        for(int x=0; x<i; x++){
                            check[y+a][x+b] = true;
                        }
                    }
                }
                count1=0;
                count2=0;
            }
        }
    }

    cout << white << "\n" << blue;
}