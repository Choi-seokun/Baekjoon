#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	for (int t = 1; t <= 10; t++) {
		int tc; cin >> tc;
		string target, sentence;
		cin >> target >> sentence;

		int count = 0;

		// npos가 아닐 때까지 반복 탐색
		size_t pos = sentence.find(target, 0);
		while (pos != string::npos) {
			count++;
			pos = pos + target.length();
			pos = sentence.find(target, pos);
		}

		cout << "#" << tc << " " << count << "\n";
	}
	return 0;
}