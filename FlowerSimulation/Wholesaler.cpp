#include "Wholesaler.h"
#include "Grower.h"

Wholesaler::Wholesaler(std::string name,Grower* grower) : Person(name)
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
	std::cout << getName() << " forwards the request to " << grower->getName() << "." << std::endl;
	FlowersBouquet* bouquet =  grower->prepareOrder(flowers);
	std::cout << grower->getName() << " returns flowers to " << getName() << "." << std::endl;
	return bouquet;
}
