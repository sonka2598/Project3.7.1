#include <iostream>
#include <windows.h>

#define MODE 1

#ifndef MODE
#error "Необходимо определить MODE"
#endif

#if MODE == 1
int add(int a, int b) {
    return a + b;
}
#endif

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

#if MODE == 0
    cout << "Работаю в режиме тренировки\n";
#elif MODE == 1
    cout << "Работаю в боевом режиме\n";
    int x, y;
    cout << "Введите число 1: ";
    cin >> x;
    cout << "Введите число 2: ";
    cin >> y;
    cout << "Результат сложения: " << add(x, y) << '\n';
#else
    cout << "Неизвестный режим. Завершение работы\n";
#endif
    return 0;
}
