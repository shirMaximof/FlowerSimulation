#pragma once
#include "Person.h"
class Person;
class FlowersBouquet;

class DeliveryPerson :public Person 
{

private:
	
	
public:
	std::string getName();
	DeliveryPerson(std::string);
	void deliver(Person*, FlowersBouquet*);
};

