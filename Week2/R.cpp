#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;  // Вводим число от 1 до 255

    // Инвертируем все биты числа x, используя побитовое НЕ (~)
    int flipped = 255 - x;

    cout << flipped << endl;  // Выводим результат
    return 0;
}
