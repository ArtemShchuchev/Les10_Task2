#include "Triangle.h"

// конструктор по умолчанию, запускает конструктор родителя с параметрами
Triangle::Triangle() : Figura(3) { ; }

void Triangle::setLengh(int a, int b, int c)
{
    if (!getQtySide() || a <= 0 || b <= 0 || c <= 0) figInit = false;
    else
    {
        lenght[0] = static_cast<unsigned int>(a);
        lenght[1] = static_cast<unsigned int>(b);
        lenght[2] = static_cast<unsigned int>(c);
        if (angle[0] && angle[1] && angle[2]) figInit = true;
        else figInit = false;
    }
}
void Triangle::setAngle(short a, short b, short c)
{
    if (!getQtySide() || a <= 0 || b <= 0 || c <= 0) figInit = false;
    else
    {
        angle[0] = static_cast<unsigned short>(a);
        angle[1] = static_cast<unsigned short>(b);
        angle[2] = static_cast<unsigned short>(c);
        if (lenght[0] && lenght[1] && lenght[2]) figInit = true;
        else figInit = false;
    }
}
