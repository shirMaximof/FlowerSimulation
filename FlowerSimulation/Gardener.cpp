#include "Gardener.h"
#include "FlowersBouquet.h"
#include "Person.h"

FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> flowers)
{
    std::cout << getName() << " prepares flowers." << std::endl;
    return new FlowersBouquet(flowers);
    
}

Gardener::Gardener(std::string name) : Person(name)
{

}

std::string Gardener::getName()
{
    return "Gardener " + Person::getName();
}
