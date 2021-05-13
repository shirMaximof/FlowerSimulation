#include "FlowerArranger.h"
#include <string>

FlowerArranger::FlowerArranger(std::string name) : Person(name)
{
}

std::string FlowerArranger::getName()
{
	return "Flower Arranger " + Person::getName();
}

void FlowerArranger::arrangeFlowers(FlowersBouquet* flowers)
{
	std::cout << getName() << " arranges flowers." << std::endl;
	flowers->arrange();
}
