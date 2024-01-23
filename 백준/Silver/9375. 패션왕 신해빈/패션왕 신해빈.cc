#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T, n;
    string S1, S2;;
    vector<string> clothes;
    vector<int> clothes_num;
    vector<int> result;
    int count = 1;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> n;

        for (int j = 0; j < n; j++) {
            cin >> S1 >> S2;
            clothes.push_back(S2);
        }
        sort(clothes.begin(), clothes.end());

        for (int j = 0; j < clothes.size(); j++) {
            if (j != clothes.size() - 1 && clothes[j] == clothes[j + 1]) {
                count++;
            }
            else {
                clothes_num.push_back(count);
                count = 1;
            }
        }

        for (int j = 0; j < clothes_num.size(); j++) {
            count *= (clothes_num[j] + 1);
        }
        count -= 1;
        result.push_back(count);

        clothes.clear();
        clothes_num.clear();
        count = 1;
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
}