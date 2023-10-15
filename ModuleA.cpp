module Myltykbaev1bib21051:A;

namespace RBPO 
{
	namespace Lab2 
	{
		namespace Variant16
		{
			namespace Task4 
			{
				double a(long long);
			}
		}
	}
}

double RBPO::Lab2::Variant16::Task4::a(long long i) {
	return (i % 2 == 0 ? 1 : -1) * (i + 1) / double(i * i + 2 * i + 1);
}