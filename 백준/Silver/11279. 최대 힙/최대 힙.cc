#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, x;
    int count = 0, index, temp;
    int heap[100001];
    vector<int> result;

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
                        if (heap[index] > heap[index * 2]) {
                            break;
                        }
                        temp = heap[index];
                        heap[index] = heap[index * 2];
                        heap[index * 2] = temp;
                        index = index * 2;
                    }
                    else {
                        if (heap[index] > max(heap[index * 2], heap[index * 2 + 1])) {
                            break;
                        }
                        if (max(heap[index * 2], heap[index * 2 + 1]) == heap[index * 2]) {
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
            while (heap[index / 2] < heap[index] && index > 1) {
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