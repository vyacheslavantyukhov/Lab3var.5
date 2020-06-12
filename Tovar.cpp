#include <iostream>
#include "Tovar.h"

using namespace std;

Tovar::Tovar()
{
name = "Potato";
price = 115.2;
}
Tovar::Tovar(string name, float price):Tovar()
{
setname(name);
setprice(price);
}
Tovar::Tovar(const Tovar &t)
{
this-> name = t.name;
this-> price = t.price;
}
void Tovar::setname(string sname)
{
this->name=sname;
}
bool Tovar::setprice(float sprice)
{
if(sprice < 0)
        return false;
    this->price=sprice;
    return true;

}
string Tovar::getname() const
{
return name;
}
float Tovar::getprice() const
{
return price;
}
void Tovar::operator=(Tovar &q)
{
setname(q.name);
setprice(q.price);
}
