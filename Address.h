//Address.h
#include <iostream>
using namespace std;


#ifndef ADDRESS_H
#define ADDRESS_H
class Address
{
	char* house_Number;
	char* street_Name ;
	char * city;
	char* county;

public:
	//Address();
	Address(char* house_Number, char* Street_Name, char * City,char* County);
	// an overloaded constructor
	Address(const Address& other);
	//copy constructor
	friend ostream& operator<<(ostream& osObject, const Address& other);
	//overloaded insertion operator
	const Address &   operator=(const Address& other);
	//overloaded assignment operator
	~Address();
};
#endif