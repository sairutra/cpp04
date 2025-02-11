#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	std::string getType() const;
	void setType(std::string);
	void makeSound() const;
	WrongAnimal();
	WrongAnimal(const WrongAnimal&);
	WrongAnimal& operator= (const WrongAnimal&);
	~WrongAnimal();
};



#endif
