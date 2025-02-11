#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main ()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();
	k->makeSound();
	delete meta;
	delete i;
	delete j;
	delete k;
}
