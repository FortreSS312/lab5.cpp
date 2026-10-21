#include <iostream>
using namespace std;

// Завдання 32
void task32()
{
    double x;
    int h;

    cout << "Vvedit x: ";
    if (!(cin >> x)) {
        cout << "Pomylka vvedennya!" << endl;
        return;
    }

    if (x < 0)
        h = static_cast<int>(2 * x);
    else if (x < 3)
        h = static_cast<int>(x);
    else
        h = static_cast<int>(6 - x);

    cout << "h(x) = " << h << endl;
}

// Завдання 37
void task37()
{
    double x;
    int q;

    cout << "Vvedit x: ";
    if (!(cin >> x)) {
        cout << "Pomylka vvedennya!" << endl;
        return;
    }

    if (x < 0)
        q = static_cast<int>(-2 * x);
    else if (x <= 2)
        q = static_cast<int>(x * x + 1);
    else
        q = 5;

    cout << "q(x) = " << q << endl;
}

// Завдання 4
void task4()
{
    int a, b, c;
    int count = 0;

    cout << "Vvedit try tsilykh chysla: ";

    if (!(cin >> a >> b >> c)) {
        cout << "Pomylka vvedennya!" << endl;
        return;
    }

    if (a > 0) count++;
    if (b > 0) count++;
    if (c > 0) count++;

    cout << "Kilkist dodatnykh chysel: "
         << count << endl;
}

// Головна функція та меню
int main()
{
    int choice;

    cout << "MENU" << endl;
    cout << "1 - Zavdannya 32" << endl;
    cout << "2 - Zavdannya 37" << endl;
    cout << "3 - Zavdannya 4" << endl;
    cout << "Vash vybir: ";

    if (!(cin >> choice)) {
        cout << "Pomylka vvedennya!" << endl;
        return 1;
    }

    switch (choice) {
        case 1:
            task32();
            break;
        case 2:
            task37();
            break;
        case 3:
            task4();
            break;
        default:
            cout << "Nepravильny vybir!" << endl;
    }

    return 0;
}