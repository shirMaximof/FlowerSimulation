// FlowerSimulation.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Person.h"
#include "Florist.h"
#include "Gardener.h"
#include "Grower.h"
#include "Wholesaler.h"
int main()
{
    DeliveryPerson* dylan = new DeliveryPerson("Dylan");
    Gardener* garett = new Gardener("Garett");
    Grower* gray = new Grower("Gray", garett);
    Wholesaler* watson = new Wholesaler("Watson", gray);
    FlowerArranger* flora = new FlowerArranger("Flora");
    Florist* fred = new Florist("Fred", watson, flora, dylan);
    Person* chris = new Person("Chris");
    Person* robin = new Person("Robin");
    std::vector<std::string> order = { "Roses", "Violets", "Gladiolus" };
    chris->orderFlowers(fred, robin, order);
    delete fred;
    delete chris;
    delete robin;
    delete dylan;
    delete flora;
    delete watson;
    delete garett;
    delete gray;
    
}