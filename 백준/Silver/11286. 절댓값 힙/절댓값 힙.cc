#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    long long x, temp;
    long long heap[100001];
    vector<long long> result;
    int N, count = 0, index;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x == 0) {
            if (count == 0) {
                result.push_back(0);
            }
            else {
                result.push_back(heap[1]);
                heap[1] = heap[count];
                count--;
                index = 1;
                while ((index * 2) <= count) {
                    if ((index * 2 + 1) > count) {
                        if ((abs(heap[index]) < abs(heap[index * 2])) || ((abs(heap[index]) == abs(heap[index * 2])) && (heap[index] <= heap[index * 2]))) {
                            break;
                        }
                        temp = heap[index];
                        heap[index] = heap[index * 2];
                        heap[index * 2] = temp;
                        index = index * 2;
                    }
                    else {
                        if (abs(heap[index]) < min(abs(heap[index * 2]), abs(heap[index * 2 + 1]))) {
                            break;
                        }
                        else if (abs(heap[index]) == min(abs(heap[index * 2]), abs(heap[index * 2 + 1]))) {
                            if (abs(heap[index]) == abs(heap[index * 2]) && heap[index] > heap[index * 2]) {
                                temp = heap[index];
                                heap[index] = heap[index * 2];
                                heap[index * 2] = temp;
                                index = index * 2;
                            }else if (abs(heap[index]) == abs(heap[index * 2 + 1]) && heap[index] > heap[index * 2 + 1]) {
                                temp = heap[index];
                                heap[index] = heap[index * 2 + 1];
                                heap[index * 2 + 1] = temp;
                                index = index * 2 + 1;
                            }
                            else {
                                break;
                            }
                        }
                        else if (abs(heap[index * 2]) == abs(heap[index * 2 + 1])) {
                            if (heap[index * 2] < heap[index * 2 + 1]) {
                                temp = heap[index];
                                heap[index] = heap[index * 2];
                                heap[index * 2] = temp;
                                index = index * 2;
                            }
                            else {
                                temp = heap[index];
                                heap[index] = heap[index * 2 + 1];
                                heap[index * 2 + 1] = temp;
                                index = index * 2 + 1;
                            }
                        } 
                        else if (min(abs(heap[index * 2]), abs(heap[index * 2 + 1])) == abs(heap[index * 2])) {
                            temp = heap[index];
                            heap[index] = heap[index * 2];
                            heap[index * 2] = temp;
                            index = index * 2;
                        }
                        else {
                            temp = heap[index];
                            heap[index] = heap[index * 2 + 1];
                            heap[index * 2 + 1] = temp;
                            index = index * 2 + 1;
                        }
                    }
                }
            }
        }
        else {
            index = count + 1;
            heap[index] = x;
            count++;
            while (abs(heap[index / 2]) >= abs(heap[index]) && index > 1) {
                if (abs(heap[index / 2]) == abs(heap[index]) && heap[index / 2] <= heap[index]) {
                    break;
                }
                temp = heap[index / 2];
                heap[index / 2] = heap[index];
                heap[index] = temp;
                index = index / 2;
            }
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
}
