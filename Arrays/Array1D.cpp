#include "Array1D.h"
#include <iostream>

using namespace std;


Array1D::Array1D(int size)
{
	this->size = size;
	t = new double[size];
	for (int i = 0; i < size; i++)
	{
		t[i] = 0;
	}
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
}

void Array1D::Display()
{
	for (int i = 0; i < size; i++)
	{
		cout << t[i] <<" ";
	}
	cout << endl;
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

Array1D& Array1D::operator=(const Array1D& other)
{
	this->~Array1D();

	this->size = other.size;
	t = new double[size];
	for (int i = 0; i < size; i++)
	{
		t[i] = other.t[i];
	}
	return *this;
}

Array1D& Array1D::operator=(double value)
{
	for (int i = 0; i < size; i++)
	{
		t[i] = value;
	}
	return *this;
}

double& Array1D::operator[](int i)
{
	return t[i];
}

Array1D Array1D::operator+(const Array1D& other)
{
	if (this->size == other.size)
	{
		Array1D t(*this);

		for (int i = 0; i < size; i++)
		{
			t[i] += other.t[i];
		}
		return t;
	}
	else
	{
		throw "Rozmiary tablic maja rozne wielkosci";
	}
}

ostream& operator<<(ostream& out, const Array1D& other)
{
	for (int i = 0; i < other.size; i++)
	{
		out << other.t[i] << " ";
	}
	return out;
}

Array1D operator-(const Array1D& a1, const Array1D& a2)
{
	if (a1.size == a2.size)
	{
		Array1D t(a1);

		for (int i = 0; i < a1.size; i++)
		{
			t[i] -= a2.t[i];
		}
		return t;
	}
	else
	{
		throw "Rozmiary tablic maja rozne wielkosci";
	}
}
