//달팽이는 올라가고싶다
#include <iostream>
#include <string> // getline사용
#include <algorithm> // sort사용
#include <cmath> // 거듭제곱수구하기

using namespace std;

int main()
{
     int A, B, V, sum=0, count=0;
     cin >> A >> B >> V;
     
     if(V==A){
        cout << 1;
        return 0;
     }
     
     count = (V-A)/(A-B);
     if((V-A)%(A-B)>0){
        count += 1;
     }
     sum = count * (A-B);
     

        count++;

     
     cout << count;
}