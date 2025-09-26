


/*



Пользователь с клавиатуры вводит 5 оценок
студента. Определить, допущен ли студент к экзамену.
Студент получает допуск, если его средний балл 4 балла
и выше
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int a, b, c, d, e;
    cout << "Оценка 1: ";
    cin >> a;
    cout << "Оценка 2: ";
    cin >> b;
    cout << "Оценка 3: ";
    cin >> c;
    cout << "Оценка 4: ";
    cin >> d;
    cout << "Оценка 5: ";
    cin >> e;

    double sred = (a + b + c + d + e) / 5.0;

    switch (static_cast<int>(sred)) {
    case 5:
        cout << "Допущен";
        break;
    case 4:
        cout << "Допущен";
        break;
    case 3:
    case 2:
    case 1:
        cout << "Не допущен";
        break;
    default:
        if (sred >= 4) cout << "Допущен";
        else cout << "Не допущен";
        break;
    }

    return 0;
}
*/


#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru"); 
    int num;
    cout << "Введите число: ";
    cin >> num;

    switch (num % 2) {
    case 0:  // если чётное
        num = num * 3;
        break;
    case 1:  // если нечётное
        num = num / 2;
        break;
    }

    cout << "Результат: " << num << endl;

    return 0;
}


/*
#include <iostream>
        using namespace std;

    int main() {
        int num;
        cout << "Введите число: ";
        cin >> num;

        switch (num % 2) {
        case 0:  // если чётное
            num = num * 3;
            break;
        case 1:  // если нечётное
            num = num / 2;
            break;
        }

        cout << "Результат: " << num << endl;

        return 0;
    }

    */













