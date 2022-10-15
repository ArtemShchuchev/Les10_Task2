#include "Figura.h"

Figura::Figura()                    // ����������� �� ���������
{
    setQtySide(0);
}
Figura::Figura(int n)               // ����������� � �����������
{
    setQtySide(n);
}
Figura::~Figura()   // ����������, �� ������, ��� ��������� ���������� ������?!
{
    if (lenght) delete[] lenght;
    if (angle) delete[] angle;
}

void Figura::setQtySide(int n)
{
    if (n <= 0)
    {
        qtySide = 0;
        lenght = nullptr;
        angle = nullptr;
    }
    else
    {
        qtySide = static_cast<unsigned int>(n);
        lenght = new unsigned int[n](); // ����� � ���-�� "n"
        angle = new unsigned short[n](); // ���� � ���-�� "n"
    }
    figInit = false;
}
bool Figura::isAvailable() { return figInit; }
unsigned int Figura::getQtySide() { return qtySide; }
// �� ���. �������� ������ ����� �����/���� = 0
unsigned int Figura::getLen(int num)
{
    if (num < 0 || num >= qtySide) return 0;
    else return lenght[num];
}
unsigned short Figura::getAng(int num)
{
    if (num < 0 || num >= qtySide) return 0;
    else return angle[num];
}
