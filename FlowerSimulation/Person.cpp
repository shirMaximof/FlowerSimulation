#include "Person.h"
#include "Florist.h"
#include "DeliveryPerson.h"


Person::Person(std::string name) : name(name)
{}

std::string Person::getName()
{
	return name;
}

void Person::orderFlowers(Florist* florist, Person* person, std::vector<std::string> order)
{
	std::cout << getName() << " orders flowers to " << person->getName() << " from " << florist->getName() << std::endl;
	florist->acceptOrder(person, order);
}

void Person::acceptFlowers(FlowersBouquet* bouquet)
{
	//Robin accepts the flowers: Roses, Violets, Gladiolus
	std::string s="";
	for (auto& elem : bouquet->getbouquet())
	{
		s = s << elem << ", ";
	}
	std::cout << getName() << "accepts the flowers: " << s;
}
