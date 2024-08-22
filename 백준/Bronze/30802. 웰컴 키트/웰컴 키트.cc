#include <iostream>
using namespace std;

int main()
{	
	int N, T, P;
	int size[6];
	int result = 0;
	
	cin >> N;
	for (int i = 0; i < 6; i++) {
		cin >> size[i];
	}
	cin >> T >> P;

	for (int i = 0; i < 6; i++) {
		if (size[i] % T == 0) {
			result += (size[i] / T);
		}
		else {
			result += (size[i] / T) + 1;
		}
	}

	cout << result << "\n";
	cout << N / P << " " << N % P;
}