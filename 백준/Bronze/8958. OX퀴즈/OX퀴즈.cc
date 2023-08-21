#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int T;
    int score = 0;
    int alpha = 1;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> str;
        for(int i=0; i<str.size(); i++){
        if(str[i] == 'O'){
            score = score + alpha;
            alpha++; 
        }
        if(str[i] == 'X'){
            alpha = 1;
        }
    }
        cout << score << endl;
        score = 0;
        alpha = 1;
    }
}