#pragma once
#include "Person.h"
#include "Grower.h"
class Wholesaler : Person
{
private:
	Grower* grower;
public:
	Wholesaler(std::string,Grower* grower);
	std::string getName();
	Grower* getGrower();
	FlowersBouquet* acceptOrder(std::vector < std::string >);



};

