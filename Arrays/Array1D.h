#pragma once
#include <iostream>
using namespace std;

class Array1D
{
private:
	double* t;
	int size;

public:
	Array1D(int size);
	Array1D(const Array1D& other);
	~Array1D();

	void Display();
	void SetValue(int i, double value);
	double GetValue(int i);

	Array1D& operator=(const Array1D& other);
	Array1D& operator=(double value);

	double& operator[](int i);

	friend ostream& operator<<(ostream& out, const Array1D& other);
};

