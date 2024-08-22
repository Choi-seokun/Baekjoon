#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B, C;
    int AB;
    
    cin >> A;
    cin >> B;
    cin >> C;
    AB = stoi(to_string(A) + to_string(B));

    cout << A + B - C << "\n";
    cout << AB - C;
}