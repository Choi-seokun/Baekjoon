//팰린드롬수
#include <iostream>
#include <string> // getline사용
#include <algorithm> // sort사용
#include <cmath> // 거듭제곱수구하기

using namespace std;

int main()
{   
    string N;
    int count=0; 
    for(;true;){
        cin >> N;
        if(N.size()!=1){
            for(int i=0; i<(N.size()/2); i++){
                if(N[i] == N[(N.size()-i-1)]){
                    count++;
                }
            }
            if(count==(N.size()/2)){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }
        if(N.size()%2!=0){
        }
        if(N.size()==1 && N[0]!='0'){
            cout<<"yes"<<endl;
        }
        if(N.size()==1 && N[0]=='0'){
            return 0;
        }
        count = 0;
    }
}