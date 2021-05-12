#include "DeliveryPerson.h"


std::string DeliveryPerson::getName()
{ 
	return "Delivery Person" + Person::getName();
}

DeliveryPerson::DeliveryPerson(std::string name) : Person(name)
{

}

void DeliveryPerson::deliver(Person* p, FlowersBouquet* bouquet)
{
	std::cout << getName() << " delivers flowers " << p->getName() << "." << std::endl;
	p->acceptFlowers(bouquet);

}
