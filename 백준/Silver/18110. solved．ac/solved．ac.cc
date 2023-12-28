//solved.ac
#include <iostream>
#include <vector>
#include <string> // getline사용
#include <algorithm> // sort사용
#include <cmath> // 거듭제곱수구하기

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> num;
    int n,temp, sum=0;
    cin >> n;
    
    if(n==0){
        cout << "0";
        return 0;
    }

    for(int i=0; i<n; i++){
        cin >> temp;
        num.push_back(temp);
    }
    sort(num.begin(), num.end());

    for(int i=round(num.size()*0.15); i<num.size()-round(num.size()*0.15); i++){
        sum += num[i];
    }
    cout << round(sum/(num.size()-2*round(num.size()*0.15)));
}