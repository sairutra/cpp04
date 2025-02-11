#ifndef BRAIN_CPP
# define BRAIN_CPP

#include <iostream>

class Brain
{
private:
	std::string ideas[100];
	int ideaCount;
public:
	std::string getIdea(int);
	void addIdea(std::string);
	Brain();
	Brain(const Brain&);
	Brain& operator= (const Brain&);
	~Brain();
};

#endif
