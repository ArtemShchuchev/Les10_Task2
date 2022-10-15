#pragma once
#include "Figura.h"

class Triangle : public Figura
{
private:
protected:
public:
    // конструктор по умолчанию, запускает конструктор родителя с параметрами
    Triangle();
    void setLengh(int a, int b, int c);
    void setAngle(short a, short b, short c);
};
