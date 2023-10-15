module Myltykbaev1bib21051;

namespace RBPO  {
	namespace Lab2 {
		namespace Variant16 {
			namespace Task3 {
				double a(long long);
			}
		}
	}
}

double RBPO::Lab2::Variant16::Task3::a(long long i) {
	return (i % 2 == 0 ? 1 : -1) * 2 * (i + 1) / double(i * i + 1);
}
