#include <iostream>
using namespace std;

/*
1) написать пример кода на композицию - должно быть два класса,
один из которых - ЦЕЛОЕ,
а второй - неотъемлемая часть целого.
в мейне написать проверочные тесты.
*/


class Glass
{
    double price;
    double size;
public:
    Glass()
    {
        this->price = 0;
        this->size = 0;
    }
    Glass(double price, double size)
    {
        this->price = price;
        this->size = size;
    }
    void Show()
    {
        cout << "Price: " << this->price << "\nSize: " << this->size << endl;
    }
    double GetPrice()
    {
        return this->price;
    }
    double GetSize()
    {
        return this->size;
    }
    void SetPrice(double price)
    {
        this->price = price;
    }
    void SetSize(double size)
    {
        this->size = size;
    }
};

class MyWindow
{
    Glass glass;
public:
    MyWindow()
    {
        this->glass = Glass();
    }
    MyWindow(Glass glass)
    {
        this->glass = Glass(glass.GetPrice(), glass.GetSize());
    }
    Glass GetGlass()
    {
        return this->glass;
    }
    void SetGlass(Glass glass)
    {
        this->glass = Glass(glass.GetPrice(), glass.GetSize());
    }
};

void main()
{
    Glass obj = Glass(10, 15);
    obj.Show();
    MyWindow wind = MyWindow();
    if (wind.GetGlass().GetPrice() == 0 && wind.GetGlass().GetSize() == 0)
    {
        cout << "Everything is not ok" << endl;
    }
    else
    {
        cout << "Everything is ok" << endl;
    }
    wind.SetGlass(obj);
    if (wind.GetGlass().GetPrice() == 0 && wind.GetGlass().GetSize() == 0)
    {
        cout << "Everything is not ok" << endl;
    }
    else
    {
        cout << "Everything is ok" << endl;
        wind.GetGlass().Show();
    }
}
 // 2 ЗАДАНИЕ
/*Наследование:

Кнопочный телефон стал - смартфоном
Растенее - роза
Тело - рука*/

 
