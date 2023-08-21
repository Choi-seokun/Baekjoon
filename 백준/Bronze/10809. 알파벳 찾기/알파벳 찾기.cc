#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int result[26];
    for(int i=0; i<26; i++){
        result[i] = -1;
    }
    int count=0;
    for(int i=0; i<str.size(); i++){
        for(int x=0; x<26; x++){
            if(str[i] == (97+x)){
                if(result[x] == -1){
                    result[x] = i;
                    break;
                }
            }
        }
    }
    for(int i=0; i<26; i++){
       cout << result[i] << " ";
    }
       
}