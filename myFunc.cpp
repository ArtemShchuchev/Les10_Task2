#include "myFunc.h"

// функция, принимает строку и базовый класс
// выводит информацию на консоль
void print_info(const std::string str, Figura* tr)
{
    using namespace std;

    cout << str << ":" << std::endl;
    if (tr->isAvailable())
    {
        int temp = 0;
        cout << "Стороны:";
        if (temp = tr->getLen(0)) cout << " а=" << temp;
        if (temp = tr->getLen(1)) cout << " b=" << temp;
        if (temp = tr->getLen(2)) cout << " c=" << temp;
        if (temp = tr->getLen(3)) cout << " d=" << temp;
        cout << std::endl << "Углы:";
        if (temp = tr->getAng(0)) cout << " A=" << temp;
        if (temp = tr->getAng(1)) cout << " B=" << temp;
        if (temp = tr->getAng(2)) cout << " C=" << temp;
        if (temp = tr->getAng(3)) cout << " D=" << temp;
        cout << std::endl;
    }
    else cout << "Фигура не определена!" << std::endl;
    cout << std::endl;
}
