#include "Address.h"
#include "Project.h"
#include "Employee.h"
//Address::Address()
//{
	//this->house_Number=nullptr;
	//this->street_Name=nullptr;
	//this->city=nullptr;
	//this->county=nullptr;
//}
Address::Address(char* house_Number, char* Street_Name, char * City,char* County)
{
	int i=strlen(house_Number);
	int j=strlen(Street_Name);
	int k=strlen(City);
	int l=strlen(County);
	this->house_Number=new char[i];
	strcpy(this->house_Number,house_Number);
	this->street_Name=new char[j];
	strcpy(this->street_Name,Street_Name);
	this->city=new char[k];
	strcpy(this->city,City);
	this->county=new char[l];
	strcpy(this->county,County);
}
Address::Address(const Address& other)
{
	int i=strlen(other.house_Number);
	int j=strlen(other.street_Name);
	int k=strlen(other.city);
	int l=strlen(other.county);
	this->house_Number=new char[i];
	strcpy(this->house_Number,other.house_Number);
	this->street_Name=new char[j];
	strcpy(this->street_Name,other.street_Name);
	this->city=new char[k];
	strcpy(this->city,other.city);
	this->county=new char[l];
	strcpy(this->county,other.county);
}
ostream& operator<<(ostream& osObject, const Address& other)
{
	osObject<<"Address : \n";
	osObject<<"House Number : "<<other.house_Number<<", Street Name : "<<other.street_Name<<", City : "<<other.city<<", Country : "<<other.county;
	return osObject;
}
const Address& Address:: operator=(const Address& other)
{
	Address a(other);
	return a;
}
Address::~Address()
{
	delete []house_Number;
	delete []street_Name;
	delete []city;
	delete []county;
}
//Project::Project()
//{
	//this->name=nullptr;
	//budget=0;
	//duration=0;
//}
Project::Project(char* name, int budget, int duration)
{
	int i=strlen(name);
	this->name=new char[i];
	strcpy(this->name,name);
	this->budget=budget;
	this->duration=duration;
}
Project::Project(const Project& other)
{
	int i=strlen(other.name);
	this->name=new char[i];
	strcpy(this->name,other.name);
	this->budget=other.budget;
	this->duration=other.duration;
}
ostream& operator<<(ostream& osObject, const Project& other)
{
	osObject<<"Project : \n";
	osObject<<"Name : "<<other.name<<", Budget : "<<other.budget<<", Duration : "<<other.duration;
	return osObject;
}
const Project& Project:: operator=(const Project& other)
{
	Project a(other);
	return a;
}
 void Project::setBudget(int budg)
{
	if(budg>0)
		this->budget=budg;
}
Project::~Project()
{
	delete []name;
}
Employee::Employee(const Employee & other)
{
	int l=strlen(other.emp_name);
	this->emp_name=new char[l];
	strcpy(this->emp_name,other.emp_name);
}
Employee::Employee(char* name,const Address& other)
{
	int l=strlen(name);
	this->emp_name=new char[l];
	strcpy(this->emp_name,name);
	Address(other);
}
ostream& operator<<(ostream& osObject, const Employee& other)
{
	osObject<<other.emp_name;
}
const Employee & Employee::  operator=(const Employee& other)
{
	Employee a(other);
	return a;
}
void Employee:: addProject(Project const * other)
{
	Project(other);
}
void Employee::removeProject(Project const * other)
{
	if(other. name==this->name)
		delete []Project a;
}



