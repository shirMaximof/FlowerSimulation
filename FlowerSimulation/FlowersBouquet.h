#pragma once
#include <string>
#include <vector>

class FlowersBouquet
{
private:
	std::vector < std::string > bouquet;
public:
	
	FlowersBouquet(std::vector<std::string>);
	std::vector < std::string > getbouquet();

};

