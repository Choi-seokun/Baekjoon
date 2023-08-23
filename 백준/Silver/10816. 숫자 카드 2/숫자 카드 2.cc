//숫자 카드2(어퍼바운드,로워바운드 활용)
#include <iostream>
#include <vector>
#include <algorithm> // sort사용

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> num1;
    vector<int> num2;

    int N, temp, count = 0;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> temp;
        num1.push_back(temp);
    }

    int M;
    cin >> M;
    for(int i=0; i<M; i++){
        cin >> temp;
        num2.push_back(temp);
    }
    sort(num1.begin(), num1.end());

    for(int i=0; i<M; i++){
        cout << upper_bound(num1.begin(),num1.end(),num2[i])-lower_bound(num1.begin(),num1.end(),num2[i]) << " ";
    } 
}