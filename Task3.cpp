#include <iostream> // консоль - cout

#include "Figura.h"
#include "Triangle.h"
#include "TriRight.h"
#include "TriIsos.h"
#include "TriEquil.h"
#include "Quad.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parall.h"
#include "Rhombus.h"
#include "myFunc.h"

// как старое задание, только с внешними файлами
// все тоже, только собрал с CMake

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");   // задаём русский текст
    system("chcp 1251");            // настраиваем кодировку консоли
    std::system("cls");

    std::cout << "Задача 2. Фигуры. Стороны и углы\n"
        << "--------------------------------\n\n";

    Figura* fig = nullptr;    // указатель на объект типа Figura

    // треугольники ----------------------
    Triangle triangle;
    triangle.setLengh(10, 20, 30);
    triangle.setAngle(50, 60, 70);
    print_info("Треугольник", &triangle);

    fig = new TriRight(10, 20, 30, 50, 60);   // вот тут я присваиваю указателю динамически выделенный объект
    print_info("Прямоугольный треугольник", fig);
    //delete tri;     // тут его нужно удалять? Или в классе нужно делать деструктор (и как делать)?

    fig = new TriIsos(10, 20, 50, 60);
    print_info("Равнобедренный треугольник", fig);

    fig = new TriEquil(30);
    print_info("Равносторонний треугольник", fig);

    fig = new TriEquil(-10);  // ошибка инициализации, длина стороны = -10 !!!
    print_info("Еще равносторонний треугольник", fig);

    // четырехугольники ----------------------
    Quad quad;
    quad.setLengh(10, 20, 30, 40);
    quad.setAngle(50, 60, 70, 80);
    print_info("Четырёхугольник", &quad);

    fig = new Rectangle(10, 20);
    print_info("Прямоугольник", fig);

    fig = new Square(20);
    print_info("Квадрат", fig);

    fig = new Parall(20, 30, 30, 40);;
    print_info("Параллелограмм", fig);

    fig = new Rhombus(30, 30, 40);;
    print_info("Ромб", fig);
    delete fig;     // а тут его нужно удалять? Или в классе нужно делать деструктор (и как делать)?
    fig = nullptr;

    system("pause"); // Команда задержки экрана

    return 0;
}
