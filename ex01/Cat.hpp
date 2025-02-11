#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	brain;
public:
	virtual void makeSound() const;
	Cat();
	Cat(const Cat&);
	Cat& operator= (const Cat&);
	virtual ~Cat();
};



#endif
