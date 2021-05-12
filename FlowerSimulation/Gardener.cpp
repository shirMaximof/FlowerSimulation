#include "Gardener.h"

FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> flowers):
{
    return new FlowersBouquet(flowers);
    
}

Gardener::Gardener(std::string): Person(name)
{
}

std::string Gardener::getName()
{
    return "Gardener" + Person::getName();
}
