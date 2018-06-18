#ifndef VEC2D_H
#define VEC2D_H

#include <iostream>

class Vec {
	private:
	public:
		// Constructors
		Vec(const double & x_val, const double & y_val);
		Vec(const Vec &);

		double x;
		double y;

		// Angle
		double radians();
		double degrees();

		// Magnitude
		double mag();

		// Dot product
		double dot(const Vec & v);

		// Arithmetic
		Vec operator*(const double & scale) const;
		Vec operator/(const double & scale) const;
		Vec operator+(const Vec & v) const;
		Vec operator-(const Vec & v) const;

		// Comparison
		bool operator==(const Vec & v) const;
		bool operator!=(const Vec & v) const;
		bool operator<(const Vec & v) const; // For ability to compile Vecs into a set
};

// Printing a vector
std::ostream & operator<<(std::ostream & o, Vec v);

// Reverse order scaling (cannot be member functions)
Vec operator*(const double & scale, const Vec & v);
Vec operator/(const double & scale, const Vec & v);

// Null vector returned whenever a valid vector could not be found
extern const Vec i_hat;
extern const Vec j_hat;
extern const Vec null_vector;

#endif
