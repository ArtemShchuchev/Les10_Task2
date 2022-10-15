#include "Quad.h"

Quad::Quad()  // конструктор по умолчанию
{
    setQtySide(4);  // создаю четырехугольник
}

void Quad::setLengh(int a, int b, int c, int d)
{
    if (!getQtySide() || a <= 0 || b <= 0 || c <= 0 || d <= 0) figInit = false;
    else
    {
        lenght[0] = static_cast<unsigned int>(a);
        lenght[1] = static_cast<unsigned int>(b);
        lenght[2] = static_cast<unsigned int>(c);
        lenght[3] = static_cast<unsigned int>(d);
        if (angle[0] && angle[1] && angle[2] && angle[3]) figInit = true;
        else figInit = false;
    }
}
void Quad::setAngle(short a, short b, short c, short d)
{
    if (!getQtySide() || a <= 0 || b <= 0 || c <= 0 || d <= 0) figInit = false;
    else
    {
        angle[0] = static_cast<unsigned short>(a);
        angle[1] = static_cast<unsigned short>(b);
        angle[2] = static_cast<unsigned short>(c);
        angle[3] = static_cast<unsigned short>(d);
        if (lenght[0] && lenght[1] && lenght[2] && lenght[3]) figInit = true;
        else figInit = false;
    }
}
