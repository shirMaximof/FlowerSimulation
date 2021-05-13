#pragma once
#include "Person.h"
class FlowerArranger:Person
{
public:
	FlowerArranger(std::string);
	std::string getName();
	void arrangeFlowers(FlowersBouquet*);
};
