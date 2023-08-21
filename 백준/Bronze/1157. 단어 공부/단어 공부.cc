#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;
    char result;
    int count=1;
    int max=0;
    int overlap = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i]>=97){
            str[i] = str[i] - 32;
        }
    }

    sort(str.begin(), str.end());

    for(int i = 0; i < str.size(); i++){
        if(str[i]==str[i+1]){
            count++;
        }else{
            if(max < count){
                result = str[i];
                max = count;
                overlap = 0;
            }else if(max == count){
                overlap++;
            }
            count = 1;
        }
    }
    if(overlap > 0){
        cout << "?";
        return 0;
    }
    cout << result;
}
