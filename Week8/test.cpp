#include <iostream>
#include <cctype> // для isalnum

using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = s.size() - 1; i >= 0; i--) {
        // Приводим к unsigned char для корректной работы с isalnum
        cout << isalnum(static_cast<unsigned char>(s[i])) << " ";
    }
    cout << endl;

    return 0;
}
