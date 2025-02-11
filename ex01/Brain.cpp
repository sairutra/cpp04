#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain Constructor" << std::endl;
}

Brain::Brain(const Brain& brain)
{

}

Brain& Brain::operator= (const Brain& brain)
{

}

Brain::~Brain()
{
	std::cout << "Default Brain Destructor" << std::endl;
}

