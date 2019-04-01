#include <iostream>
using namespace std;

#ifndef PROJECT_H
#define PROJECT_H
class Project
{
	char* name;
	int budget;
	int duration; //estimate duration of project in weeks

public: 
	//Project();
	Project(char* name, int budget, int duration);
	// an overloaded constructor
	Project(const Project& other);
	//copy constructor
	friend ostream& operator<<(ostream& osObject, const Project& other);
	//overloaded insertion operator
	const Project &   operator=(const Project& other);
	//overloaded assignment operator
	void setBudget(int budg); 
	~Project();
}; 
#endif