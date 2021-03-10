#include "Array1D.h"
#include <iostream>


Array1D::Array1D(int size)
{
	this->size = size;
	t = new double[size];
}

Array1D::~Array1D()
{
	delete[] t;
	t = NULL;
	size = 0;
	std::cout << "Dziala destruktor" << std::endl;
}
