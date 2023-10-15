module;
#include <cmath>

module Myltykbaev1bib21051;

namespace RBPO {
	namespace Lab2 
	{
		namespace Variant16
		{
			namespace Task3 
			{
				double f1(double);
			}
		}
	}
}

double RBPO::Lab2::Variant16::Task3::f1(double x) {
	return ((x * x + 2 * x - 3) + (x + 1) * sqrt(x * x - 9)) / ((x * x - 2 * x - 3) + (x - 1) * sqrt(x * x - 9));
}
