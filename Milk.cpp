#include <iostream>
#include "Tovar.h"
#include "Milk.h"

using namespace std;

Milk::Milk (): Tovar (), fatness (3.5) , volume (0.5) {}
Milk::Milk(string name, float price, float fatness, float volume): Tovar (name, price), fatness (2.5), volume (5)
{
(setfatness(fatness));
(setvolume (volume));
}
bool Milk::setfatness (float sfatness)
{
if(sfatness < 0)
return false;
this->fatness=sfatness;
return true;
}
bool Milk::setvolume (float svolume)
{
if(svolume < 0)
return false;
this->volume=svolume;
return true;
}
float Milk::getfatness() const
{
return fatness;
}
float Milk::getvolume() const
{
return volume;
}
void Milk::operator = (Milk &m)
{
(setfatness(m.fatness));
(setvolume(m.volume));
}
void Milk::print() const
{
setlocale(LC_ALL, "Russian");
cout << "Информация о Молочные продукты:" << endl;
cout << "Название : " << name << endl;
cout << "Цена : " << price <<endl;
cout << "Жирность : " << fatness <<endl;
cout << "Объем : " << volume << endl << endl;
}
