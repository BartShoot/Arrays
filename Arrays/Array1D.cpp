#include "Array1D.h"
#include <iostream>

using namespace std;


Array1D::Array1D(int size)
{
	this->size = size;
	t = new double[size];
}

Array1D::Array1D(const Array1D& other)
{
	this->size = other.size;
	this->t = new double[size];

	for (int i = 0; i < size; i++)
	{
		this->t[i] = other.t[i];
	}
}

Array1D::~Array1D()
{
	if (t!=NULL)
	{
		delete[] t;
	}
	t = NULL;
	size = 0;
	cout << "Dziala destruktor" << std::endl;
}

void Array1D::Display()
{
	for (int i = 0; i < size; i++)
	{
		cout << t[i] << endl;
	}
	
}

void Array1D::SetValue(int i, double value)
{
	if (i > 0 && i < size)
	{
		t[i] = value;
	}
	else
	{
		throw "Index out of bounds";
	}
}

double Array1D::GetValue(int i)
{
	if (i > 0 && i < size)
	{
		return t[i];
	}
	else
	{
		throw "Index out of bounds";
	}
}
