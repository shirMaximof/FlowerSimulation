#include "Grower.h"

Grower::Grower(std::string name, Gardener*gardener):Person(name)
{
	this->gardener = gardener;
}

FlowersBouquet Grower::prepareOrder(std::vector<std::string>)
{
	std::cout << getName() << " forwards the request to " << gardener->getName() << std::endl;
	return FlowersBouquet();
}

std::string Grower::getName()
{
	return "Grower" + Person::getName();
}
