#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string) : Person(name)
{
}

std::string Wholesaler::getName()
{
	return std::string();
}

Grower* Wholesaler::getGrower()
{
	return this->grower;
}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers)
{
	return grower.prepareOrder(flowers);
}
