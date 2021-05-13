#pragma once
#include <vector>
#include <string>
#include "Person.h"
#include "Gardener.h"

class Gardener : Person
{
public:
	Gardener(std::string);
	FlowersBouquet* prepareBouquet(std::vector<std::string>);
	std::string getName();
};

