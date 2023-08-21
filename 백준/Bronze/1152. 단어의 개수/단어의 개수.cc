#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    int count=0;
    getline(cin, str);
    if(str[0] != ' '){
        count++;
    }

    if(str[0] == '\0'){
        cout << 0;
        return 0;
    }

    if(str[0] == ' ' && str[1] == '\0'){
        cout << 0;
        return 0;
    }

    for(int i=0; i<1000000; i++){
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0'){
            count++;
        }
        if(str[i]=='\0'){
            break;
        }
    }
    cout << count;
}