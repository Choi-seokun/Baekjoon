#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, start, end;
    pair<int, int> time[100000];
    int count = 1;
    int last_end;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> start >> end;
        time[i].first = end;
        time[i].second = start;
    }

    sort(time, time + N);

    last_end = time[0].first;
    for (int i = 1; i < N; i++) {
        if (time[i].second >= last_end) {
            count++;
            last_end = time[i].first;
        }
    }

    cout << count;
}