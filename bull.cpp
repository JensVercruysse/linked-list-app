#include "bull.h"

Bull::Bull(int weight, int liftCapacity, std::string name)
{
    this->weight = weight;
    this->liftCapacity = liftCapacity;
    this->name = name;
}

std::string Bull::to_string(void)
{
    return "Bull details: weight: " + std::to_string(weight) + " tons. LiftCapacity: " + std::to_string(liftCapacity) + " tons. Name: " + name + ".";
}