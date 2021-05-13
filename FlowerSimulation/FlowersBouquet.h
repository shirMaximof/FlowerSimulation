#pragma once
#include <string>
#include <vector>


class FlowersBouquet
{
private:
	std::vector < std::string > bouquet;
	bool is_arrange;
public:
	void arrange();
	FlowersBouquet(std::vector<std::string>);
	std::vector < std::string > getbouquet();

};

