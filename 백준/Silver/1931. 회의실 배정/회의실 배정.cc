#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int N, start, end;
    pair<int, int> time[100000];
    vector<pair<int, int>> fix;
    bool check = true;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> start >> end;
        time[i].first = end;
        time[i].second = start;
    }

    sort(time, time + N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < fix.size(); j++) {
            if (time[i].second < fix[j].first) {
                check = false;
                break;
            }
        }
        if (check == false) {
            check = true;
            continue;
        }
        else {
            fix.push_back(make_pair(time[i].first, time[i].second));
        }
    }

    cout << fix.size();
}