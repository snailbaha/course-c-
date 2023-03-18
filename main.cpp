#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstbook, secondbook, thirdbook;
    getline(cin, firstbook);
    getline(cin, secondbook);
    getline(cin, thirdbook);
    cout << thirdbook << endl;
    cout << secondbook << endl;
    cout << firstbook << endl;
    return 0;
}