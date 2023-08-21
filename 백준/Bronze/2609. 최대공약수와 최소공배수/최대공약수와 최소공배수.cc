//최대공약수와 최소공배수
#include <iostream>
#include <string> // getline사용
#include <algorithm> // sort사용
#include <cmath> // 거듭제곱수구하기

using namespace std;

int main()
{
    int a,b,max=0,min=0;
    cin >> a >> b;
    int smaller;
    if(a>b){
        smaller = b;
    }else{
        smaller = a;
    }
    for(int i=1; i<=smaller; i++){
        if(a%i==0 && b%i==0){
            if(max<i){
                max=i;
            }
        }
    }
    for(int i=1; true; i++){
        if((max*i)%a==0 && (max*i)%b==0){
            min = max*i;
            break;
        }
    }
    cout << max << endl; 
    cout << min << endl;  
}