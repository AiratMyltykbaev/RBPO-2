module;
#include <cmath>

module Myltykbaev1bib21051;

namespace RBPO {
	namespace Lab2 {
		namespace Variant16{
			namespace Task2 {
				double f1(double);
				double f2(double);
				double f3(unsigned long long);
				double f4(double);
				double a(long long);
			}
		}
	}
}

double RBPO::Lab2::Variant16::Task2::f1(double x) {
	return ((x * x + 2 * x - 3) + (x + 1) * sqrt(x * x - 9)) / ((x * x - 2 * x - 3) + (x - 1) * sqrt(x * x - 9));
}

double RBPO::Lab2::Variant16::Task2::f2(double x) {
	if (x > 3)
		return (1 / (x * x * x + 6));
	return x * x - 3 * x + 9;
}

double RBPO::Lab2::Variant16::Task2::a(long long i) {
	return (i % 2 == 0 ? 1 : -1) * (i + 1) / double(i * i + 2 * i + 1);
}

double RBPO::Lab2::Variant16::Task2::f3(unsigned long long n) {
	double sum = a(0); unsigned long long i = 0;
	while (i < n)
		sum += a(++i);
	return sum;
}

double RBPO::Lab2::Variant16::Task2::f4(double eps) {
	double sum = a(0), temp = a(0), temp1 = a(1); unsigned long long i = 1;
	while (eps <= abs(temp - temp1))
		sum += temp, temp = temp1, temp1 = a(++i);
	return sum;
}

