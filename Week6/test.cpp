#include <iostream>
#include <algorithm>  // Для std::sort

using namespace std;

int main() {
    // Создаем массив с неотсортированными числами
    int numbers[] = {5, 2, 9, 1, 5, 6};

    // Определяем размер массива
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Сортируем массив по возрастанию
    sort(numbers, numbers + size);

    // Выводим отсортированные числа
    cout << "Отсортированные числа: ";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
