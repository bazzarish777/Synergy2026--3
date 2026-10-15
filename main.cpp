#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);

    // Ввод элементов массива
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Поиск индексов минимального и максимального элементов
    int minIndex = min_element(A.begin(), A.end()) - A.begin();
    int maxIndex = max_element(A.begin(), A.end()) - A.begin();

    // Определение границ участка
    int left = min(minIndex, maxIndex);
    int right = max(minIndex, maxIndex);

    // Начальное значение суммы
    long long sum = 0;

    // Суммирование отрицательных элементов между границами
    for (int i = left + 1; i < right; i++) {
        if (A[i] < 0) {
            sum += A[i];
        }
    }

    // Вывод результата
    cout << sum << endl;

    return 0;
}
