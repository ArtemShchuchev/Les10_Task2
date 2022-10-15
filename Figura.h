#pragma once

class Figura
{
private:
    unsigned int qtySide;       // ����� ������ ������

protected:  // ������ � ���� ����� ����� ���������� �� ����������� �������
    bool figInit;               // false - ������ �� ������������
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
