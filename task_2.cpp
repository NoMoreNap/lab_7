#include <iostream>

using  namespace  std;

int pos = 3;

int Fibonacci(int max) {
    int sum = 0, prev = 0, current = 1;
    do {
        sum = prev + current;
        prev = current;
        current = sum;
        if (sum >= max ) {
            break;
        }
        pos++;
    } while (true);
    return sum;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int max;

    wcout << L"Введите максимальное число ( от 1 до 2^31 )\n";
    cin >> max;

    if (!cin.good() || max <= 1 || max > 2147483647-1) {
        wcout << L"Введено неверное число";
        return 0;
    }

    int findeded_int = Fibonacci( max);
    wcout << L"Найденное число " << findeded_int << L" на позиции " << pos << L" в последовательности Фибоначчи";
}
