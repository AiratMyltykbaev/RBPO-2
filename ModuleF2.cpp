module Myltykbaev1bib21051:F2;

namespace RBPO 
{
	namespace Lab2 
	{
		namespace Variant16
		{
			namespace Task4 {
				double f2(double);
			}
		}
	}
}

double RBPO::Lab2::Variant16::Task4::f2(double x) {
	return x > 3 ? (1 / (x * x * x + 6)) : x * x - 3 * x + 9;
}
