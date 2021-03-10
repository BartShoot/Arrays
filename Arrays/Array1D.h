#pragma once
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

};

