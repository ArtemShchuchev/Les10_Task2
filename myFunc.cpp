#include "myFunc.h"

// �������, ��������� ������ � ������� �����
// ������� ���������� �� �������
void print_info(const std::string str, Figura* tr)
{
    using namespace std;

    cout << str << ":" << std::endl;
    if (tr->isAvailable())
    {
        int temp = 0;
        cout << "�������:";
        if (temp = tr->getLen(0)) cout << " �=" << temp;
        if (temp = tr->getLen(1)) cout << " b=" << temp;
        if (temp = tr->getLen(2)) cout << " c=" << temp;
        if (temp = tr->getLen(3)) cout << " d=" << temp;
        cout << std::endl << "����:";
        if (temp = tr->getAng(0)) cout << " A=" << temp;
        if (temp = tr->getAng(1)) cout << " B=" << temp;
        if (temp = tr->getAng(2)) cout << " C=" << temp;
        if (temp = tr->getAng(3)) cout << " D=" << temp;
        cout << std::endl;
    }
    else cout << "������ �� ����������!" << std::endl;
    cout << std::endl;
}
