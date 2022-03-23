#include "Employee.h"
#include <string.h>

/*Constructor
This is called when an object is created. Normally we set any defaults 
and assign memory here */ 
Employee::Employee(void)
{
	salary = 0.0f;
	strcpy(name, "NO NAME SET");
}

/*Overloaded constructor, this version makes use of the mutator
methods in the class - important don't write the same code twice in 
two different places or you'll be fixing bugs twice */
Employee::Employee(char* name, float salary)
{
	//Note: even though there is a salary in the class its always
	//the local variable which is used unless we use 'this'
	setSalary(salary);
	//this can be used to refer to the attributes or methods of this class
	//for example this->salary = salary;
	this->setName(name);
}

/*Distructor / De-Constructor
This method is a sort of reverse constructor and is 
used to get rid of memory allocated in the constructor.  
May also check if any memory has been allocated and
get rid of this also */
Employee::~Employee(void)
{
	
}

void Employee::setName(char* nameIn)
{
	strcpy(name, nameIn);
}

char* Employee::getName()
{
	//This is a bit dodgy we're returning a pointer to a string within an object
	//if we delete the object this will mess up. Hence the overloaded method.
	return name;
}

void Employee::getName(char* nameOut)
{
	strcpy(nameOut, name);
}	

void Employee::setSalary(float salary)
{
	//Input error checking is one of the major advantages 
	//of classes over structures
	if(salary > 0.0f)
	{
		//this can be used to differentiate between local method names 
		//and attributes associated with the class. 
		this->salary = salary;
	}
}

float Employee::getSalary()
{
	return salary;
}

