#include <iostream>
#include <iomanip>

using namespace std;


class Engine{
private:
    int n = 3;
public:
    Engine (int size) {
        n = size;
    }

    void PrintMatrix(int **matrix) {
        cout << setw(6*n / 2) << "Matrix " << n << "x" << n << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << setw(6) << matrix[i][j];
            }
            cout<< "\n";
        }
        cout << endl;
    }

    void PrintDiagonal(int **matrix) {
        wcout << L"Главная диагональ матрицы: \n";
        int i = 0;
        while (i < n) {
            cout << matrix[i][i] << " ";
            i++;
        }
        cout << endl;
    }

    void FindSingleElement(int **matrix) {
        wcout << L"Единичные элементы: \n";
        int i = 0;
        while (i < n) {
            if (matrix[i][i] == 1) {
                n - 1 != i ?
                    cout << "A(" << i + 1 << "," << i + 1 << ")," :
                    cout << "A(" << i + 1 << "," << i + 1 << ")";
            }
            i++;
        }

    }

};