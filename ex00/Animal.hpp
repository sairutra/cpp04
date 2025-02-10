#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	std::string getType();
	void setType(std::string);
	void makeSound();
	Animal();
	Animal(const Animal&);
	Animal& operator= (const Animal&);
	~Animal();
};



#endif