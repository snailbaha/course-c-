#include <iostream>

using namespace std;

int main() {
    int a, b, sum;
    cin >> a >> b;
    sum = a + b;
    int digits = to_string(sum).length();
    int product = sum * digits;
    cout << product << endl;
    return 0;
}