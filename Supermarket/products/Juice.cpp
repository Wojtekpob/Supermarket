#include "Juice.h"

Juice::Juice(string name, int price, int calories, string Producer, string barcode, int sugarPer100)
	:Product(name, Producer, barcode, price, calories), sugarPer100(sugarPer100)
{
	vat = 8;
}

float Juice::VAT() const
{
	return price*0.12;
}

string Juice::Localization() const
{
	return "Alley 1; Shelve 12, 13, 14";
}

int Juice::getSugarPer100() const
{
	return sugarPer100;
}

bool Juice::operator==(const Juice& second_juice) const
{
	return (name == second_juice.name and calories == second_juice.calories and price == second_juice.price and producer == second_juice.producer and sugarPer100 == second_juice.sugarPer100);
}
