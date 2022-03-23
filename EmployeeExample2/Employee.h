#pragma once
/*
This is identical to the 
#ifndef uniqueSymbol / #define uniqueSymbol / #endif 
combination we've been using in our earlier files.  Some compilers do not
like pragma once. Some older M$ compilers mark it as depricated.  
*/

//Define a class (thats everything after the name of the class and 
//up to the closing bracket and semi-colon
class Employee
{
//Visibility of elements of the class these are marked by tags
//this is the private section
private:
	char name[64];
	float salary;
public:
	Employee(void);
	//Overloaded version of the above
	Employee(char*, float salary);
	~Employee(void);

	void setName(char*);
	char* getName(void);
	//Overloaded version of the above
	void getName(char*);

	void setSalary(float);
	float getSalary(void);
};
