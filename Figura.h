#pragma once

class Figura
{
private:
    unsigned int qtySide;       // число сторон фигуры

protected:  // теперь к этим полям можно обращаться из производных классов
    bool figInit;               // false - объект не действителен
    unsigned int* lenght;
    unsigned short* angle;

public:
    Figura();
    Figura(int);
    ~Figura();

    void setQtySide(int);
    bool isAvailable();
    unsigned int getQtySide();
    unsigned int getLen(int);
    unsigned short getAng(int);
};
