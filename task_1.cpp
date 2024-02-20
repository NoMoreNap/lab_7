#include <iostream>
#include "Engine.h"
#include <cmath>

#define PI 3.14159265

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    unsigned short int n = 1;

    wcout << L"Введите размерность квадратной матрицы  ( до 10 )>> ";
    cin >> n;

    if (!cin.good()) {
        wcout << L"Неверное значение матрицы";
        return 0;
    }
    if (n > 10) {
        wcout << L"Слишком большая матрица";
        return 0;
    }
    if (n <= 0) {
        wcout << L"Нельзя вводить нулевую матрицу";
        return 0;
    }

    int matrix[n][n];
    int * staticMatrix[n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            const long double value = i * cos( j / PI);
            matrix[i][j] = value;
        }
        staticMatrix[i] = matrix[i];

    }
    Engine Engine(n);

    Engine.PrintMatrix(&staticMatrix[0]);
    Engine.PrintDiagonal(&staticMatrix[0]);
    Engine.FindSingleElement(&staticMatrix[0]);

    return 0;
}
