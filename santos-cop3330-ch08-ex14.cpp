/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ernesto Santos
 */


/* It is possible to declare a function with a const argument
Doing so means that value cannot be altered inside the function
And if it is altered it will cause an error.

It might not be done often becuse preograming convesions says constant values should be
declared glovaly and maybe to avoid errors and confusion.
*/


#include <iostream>
#include <math.h>
using namespace std;

const double PI = 3.14159265358979;

double getRadius(const int area);
void getCircunference(const double radius);
void causeError(int const value);


int main()
{
	srand(time(0));

	int Area = (rand() % 100) + 1;

	printf("Area: %d\n", Area);

	double radius = getRadius(Area);
	getCircunference(radius);

}

//Test functions for question
double getRadius(const int area)
{
	double radius = sqrt((area / PI));

	cout << "Radius : " << radius << "\n";

	return radius;
}

void getCircunference(const double radius)
{
	double circunference = 2.0 * radius * PI;

	cout << "Circunference : " << circunference << "\n";

}

//Uncomenting will cause an error
/*void causeError(int const value)
{
	value = 15;
}*/


/*Ex 14: Can we declare a non-reference function argument
const (e.g., void f(const int);)? What might that mean?
Why might we want to do that? Why don’t people do
that often? Try it; write a couple of small programs to
see what works.
*/
