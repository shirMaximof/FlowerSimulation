#include "DeliveryPerson.h"

std::string DeliveryPerson::getName()
{
	return std::string();
}

DeliveryPerson::DeliveryPerson(std::string name) : Person(name)
{

}

void DeliveryPerson::deliver(Person* p, FlowersBouquet* bouquet)
{
	p->acceptFlowers(bouquet);

}
