#include "Pizza.hpp"

Pizza::Pizza()
{
    sanMarzano = false;
    mozzarella = false;
    oliveOil = false;
    proscuittoCotto = false;
    picanteSalami = false;
    granaPadano = false;
}

Pizza::~Pizza()
{
}

void Pizza::AddSanMarzano()
{
    sanMarzano = true;
}

void Pizza::AddMozzarella()
{
    mozzarella = true;
}

void Pizza::AddOliveOil()
{
    oliveOil = true;
}

void Pizza::AddProscuittoCotto()
{
    proscuittoCotto = true;
}

void Pizza::AddPicanteSalami()
{
    picanteSalami = true;
}

void Pizza::AddGranaPadano()
{
    granaPadano = true;
}

std::string Pizza::toString()
{
    std::string pizza = "Pizza contains: ";
    if (sanMarzano)
        pizza += "San Marzano, ";
    if (mozzarella)
        pizza += "Mozzarella, ";
    if (oliveOil)
        pizza += "Olive Oil, ";
    if (proscuittoCotto)
        pizza += "Proscuitto Cotto, ";
    if (picanteSalami)
        pizza += "Picante Salami, ";
    if (granaPadano)
        pizza += "Grana Padano, ";
    return pizza;
}