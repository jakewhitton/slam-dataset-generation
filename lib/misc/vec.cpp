#include "misc/vec.h"
#include <iostream>
#include <cmath>

using std::ostream;
using std::cout;
using std::endl;

// Null vector returned whenever a valid vector could not be found
const Vec null_vector {0, 0};

const Vec i_hat {1, 0};
const Vec j_hat {0, 1};

Vec::Vec(const double & x_val, const double & y_val) :
	x(x_val),
	y(y_val)
{ }

Vec::Vec(const Vec & v) :
	x(v.x),
	y(v.y)
{ }

/* ################# Angles ################ */
double Vec::radians() {
	return atan2(y, x);
}

double Vec::degrees() {
	return radians() * 180.0 / M_PI;
}
/* ######################################### */



/* ############### Magnitude ############### */
double Vec::mag() {
	return sqrt(x*x + y*y);
}
/* ######################################### */



/* ############### Dot Product ############### */
double Vec::dot(const Vec & v) {
	return x*v.x + y*v.y;
}
/* ########################################### */



/* ############### Arithmetic ############### */
Vec Vec::operator*(const double & scale) const {
	return {scale*x, scale*y};
}

Vec Vec::operator/(const double & scale) const {
	return {x/scale, y/scale};
}

Vec Vec::operator+(const Vec & v) const {
	return {x + v.x, y + v.y};
}

Vec Vec::operator-(const Vec & v) const {
	return {x - v.x, y - v.y};
}

Vec operator*(const double & scale, const Vec & v) {
	return v*scale;
}

Vec operator/(const double & scale, const Vec & v) {
	return v/scale;
}
/* ########################################## */



/* ############### Comparison ############### */
bool Vec::operator==(const Vec & v) const {
	double dx = abs(v.x - x);
	double dy = abs(v.y - y);

	const double epsilon = 0.05;

	return (dx < epsilon) && (dy < epsilon);
}

bool Vec::operator!=(const Vec & v) const {
	return !(*this == v);
}

bool Vec::operator<(const Vec & v) const {
	if (x == v.x) {
		return x < v.x;
	} else {
		return y < v.y;
	}
}
/* ########################################## */

ostream & operator<<(ostream & o, Vec v) {
	printf("(%.2f, %.2f)", v.x, v.y);
	return o;
}
