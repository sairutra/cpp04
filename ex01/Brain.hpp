#ifndef BRAIN_CPP
# define BRAIN_CPP

#include <iostream>

constexpr int numOfIdeas = 100;

class Brain
{
private:
	std::string ideas[numOfIdeas];
	int ideaIndex;
	void deepCopy(const Brain&);
public:
	std::string getIdea(int) const;
	int getIdeaIndex() const;
	void setIdeaIndex(int);
	void addIdea(std::string);
	Brain();
	Brain(const Brain&);
	Brain& operator= (const Brain&);
	~Brain();
};

#endif
