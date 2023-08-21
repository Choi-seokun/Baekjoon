#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T, R;
    string S;
    cin >> T;
    for (int x = 0; x < T; x++){
        cin >> R >> S;
        for (int y = 0; y < S.size(); y++){
            for (int z = 0; z < R; z++){
                cout << S[y];
            }
        }
        cout << endl;
    }
    return 0;
}