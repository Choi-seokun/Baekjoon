#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N, M, B, temp;
    int max=-1, min=257;
    int time = 0, count = 0;
    int ResultTime=100000000, ResultHeight;
    int array[500][500];

    cin >> N >> M >> B;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> temp;
            if (temp < min) {
                min = temp;
            }
            if (temp > max) {
                max = temp;
            }
            array[i][j] = temp;
        }
    }

    for (int i = min; i <= max; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                if (array[j][k] > i) {
                    time = time + (array[j][k] - i) * 2;
                    count += (array[j][k] - i);
                }
                else {
                    time = time + (i - array[j][k]) * 1;
                    count -= (i - array[j][k]);
                }
            }
        }
        if (B+count>=0) {
            if (time < ResultTime) {
                ResultTime = time;
                ResultHeight = i;
            }
            if (time == ResultTime) {
                if (i > ResultHeight) {
                    ResultHeight = i;
                }
            }
        }
        time = 0;
        count = 0;
    }
    
    cout << ResultTime << " " << ResultHeight;
}