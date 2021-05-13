#pragma once
#include "Gardener.h"
#include "Person.h"
class Grower: Person
{
private:
	Gardener* gardener;
	
public:
	Grower(std::string name, Gardener*);
	FlowersBouquet* prepareOrder(std::vector<std::string>);
	std::string getName();

};

