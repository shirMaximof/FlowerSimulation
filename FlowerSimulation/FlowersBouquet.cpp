#include "FlowersBouquet.h"

void FlowersBouquet::arrange()
{
	is_arrange = true;
}

FlowersBouquet::FlowersBouquet(std::vector<std::string> bouquet)
{
	this->bouquet = bouquet;
	is_arrange = false;
}

std::vector<std::string> FlowersBouquet::getbouquet()
{
	return this->bouquet;
}
