#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int N;
    int sum=0, count=1, maxcount=0;
    vector<int> maxcountnum,array;
    int temp;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> temp;
        sum += temp;
        array.push_back(temp);
    }
    array.push_back(4001);

    sort(array.begin(), array.end());

    for (int i = 1; i < N+1; i++) {
        if (array[i] == array[i - 1]) {
            count++;
        }else {
            if (count == maxcount) {
                maxcountnum.push_back(array[i - 1]);
            }
            if (count > maxcount) {
                maxcount = count;
                maxcountnum.clear();
                maxcountnum.push_back(array[i - 1]);
            }
            count = 1;
        }
    }

    sort(maxcountnum.begin(), maxcountnum.end());

    cout << floor(sum / float(N) + 0.5) << "\n";
    cout << array[N/2] << "\n";
    
    if (maxcountnum.size() >= 2) {
        cout << maxcountnum[1] << "\n";
    }
    else {
        cout << maxcountnum[0] << "\n";
    }
    
    cout << array[N - 1] - array[0] << "\n";
}
