#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string,Grower* grower) : Person(name)
{
	this->grower = grower;
}

std::string Wholesaler::getName()
{
	return "Wholesaler " + Person::getName() ;
}

Grower* Wholesaler::getGrower()
{
	return this->grower;
}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers)
{
	return grower.prepareOrder(flowers);
}
