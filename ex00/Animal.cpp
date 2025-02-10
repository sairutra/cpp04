#include "Animal.hpp"

void makeSound(void)
{
	std::cout << "Animal sound!";
}

std::string Animal::getType(void)
{
	return (type);
}

void Animal::setType(std::string value)
{
	type = value;
}

Animal::Animal()
{
	std::cout << "Default Animal Constructor" << std::endl;
}

Animal::Animal(const Animal&)
{
	std::cout << "Animal Copy Constructor" << std::endl;
}

Animal& Animal::operator= (const Animal& animal)
{
	std::cout << "Animal Copy Assignment Operator" << std::endl;
	if (this == &animal)
		return (*this);
	setType(animal.type);
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Copy Assignment Operator" << std::endl;
}
