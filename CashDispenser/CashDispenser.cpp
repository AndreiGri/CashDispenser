#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");

    int limit = 100000;
    int banknote = 100;
    int summ = 0;

    cout << endl;
    cout << " Ввдите сумму для снятия: ";
    cin >> summ;

    if (summ > limit) {
        cout << " Банкомат не может выдать " << summ << " рублей т.к. данная сумма превышает лимит в " << limit << " рублей!" << endl;
    }
    else {
        if (summ % banknote != 0) {
            cout << " Банкомат не может выдать " << summ << " рублей т.к. данная сумма не кратна " << banknote << " рублям!" << endl;
        }
        else {
            if (summ <= 0) {
                cout << " Вы ввели отрицательную сумму!" << endl;
            }
            else {
                cout << " Не забудте забрать ваши " << summ << " рублей!" << endl;
            }
        }
    }

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}