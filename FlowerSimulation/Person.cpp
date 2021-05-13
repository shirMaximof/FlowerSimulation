#include "Person.h"
#include "Florist.h"
#include "FlowersBouquet.h"


Person::Person(std::string name) : name(name)
{}

std::string Person::getName()
{
	return name;
}

void Person::orderFlowers(Florist* florist, Person* person, std::vector<std::string> order)
{
	std::string flowers = " ";
	for (auto& element : order)
	{
		flowers = flowers + element + ", ";
	}
	flowers = flowers.substr(0, flowers.size() - 2) + ".";
	std::cout << getName() << " orders flowers to " << person->getName() << " from " << florist->getName() << ":" << flowers << std::endl;
	florist->acceptOrder(person, order);
}

void Person::acceptFlowers(FlowersBouquet* bouquet)
{
	//Robin accepts the flowers: Roses, Violets, Gladiolus
	std::string out = "";
	for (auto& element: bouquet->getbouquet())
	{
		out = out + element + ", ";
	}
	out = out.substr(0, out.size() - 2) + ".";
	std::cout << getName() << " accepts the flowers: " << out << std::endl;
}
