#include "Employee.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	Employee x; //static object allocation
	x.setName("bob");
	x.setSalary(1000.0f);
	printf("%s earns %f\n", x.getName(), x.getSalary());

	/*Dynamic memory allocation is far more common with objects 
	and is my personal preference as a program then only uses as much 
	memory as it needs */ 
	Employee *y = new Employee(); 
	y->setName("bill");
	y->setSalary(2000.0f);
	printf("%s earns %f\n", y->getName(), y->getSalary());

	//using the overload
	Employee *z = new Employee("rob", 3000.0f);
	printf("%s earns %f\n", z->getName(), z->getSalary());

	//Need to clean up the dynamiclly allocated memory
	delete(y);
	delete(z);
}