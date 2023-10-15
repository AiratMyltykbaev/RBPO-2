#include <iostream>

import Myltykbaev1bib21051;
using namespace std;

int main() {
	char q;
	do
	{
		cout << "What i should to do?\
					\nFirst task\t\'1\'\
					\nSecond task\t\'2\'\
					\nThird task\t\'3\'\
					\nfourth task\t\'4\'\
					\nFith task\t\'5\'\
					\nEnd?\t\'Q\'" << endl;
		cin >> q;

		switch (q) {
			unsigned long long n; double x, eps;

		case '1':
			cout << "You choose 1 Task to test." << endl
				<< "Input x, n and epsilon:" << endl;
			cin >> x >> n >> eps;
			cout << "f1(x) = " << RBPO::Lab2::Variant16::Task1::f1(x) << endl
				<< "f2(x) = " << RBPO::Lab2::Variant16::Task1::f2(x) << endl
				<< "f3(n) = " << RBPO::Lab2::Variant16::Task1::f3(n) << endl
				<< "f4(eps) = " << RBPO::Lab2::Variant16::Task1::f4(eps) << endl;
			break;

		case '2':
			cout << "You choose 2 Task to test." << endl
				<< "Input x, n and epsilon:" << endl;
			cin >> x >> n >> eps;
			cout << "f1(x) = " << RBPO::Lab2::Variant16::Task2::f1(x) << endl
				<< "f2(x) = " << RBPO::Lab2::Variant16::Task2::f2(x) << endl
				<< "f3(n) = " << RBPO::Lab2::Variant16::Task2::f3(n) << endl
				<< "f4(eps) = " << RBPO::Lab2::Variant16::Task2::f4(eps) << endl;
			break;

		case '3':
			cout << "You choose 3 Task to test." << endl
				<< "Input x, n and epsilon:" << endl;
			cin >> x >> n >> eps;
			cout << "f1(x) = " << RBPO::Lab2::Variant16::Task3::f1(x) << endl
				<< "f2(x) = " << RBPO::Lab2::Variant16::Task3::f2(x) << endl
				<< "f3(n) = " << RBPO::Lab2::Variant16::Task3::f3(n) << endl
				<< "f4(eps) = " << RBPO::Lab2::Variant16::Task3::f4(eps) << endl;
			break;

		case '4':
			cout << "You choose 4 Task to test." << endl
				<< "Input x, n and epsilon:" << endl;
			cin >> x >> n >> eps;
			cout << "f1(x) = " << RBPO::Lab2::Variant16::Task4::f1(x) << endl
				<< "f2(x) = " << RBPO::Lab2::Variant16::Task4::f2(x) << endl
				<< "f3(n) = " << RBPO::Lab2::Variant16::Task4::f3(n) << endl
				<< "f4(eps) = " << RBPO::Lab2::Variant16::Task4::f4(eps) << endl;
			break;

		case '5':
			cout << "You choose 5 Task to test." << endl
				<< "Input x, n and epsilon:" << endl;
			cin >> x >> n >> eps;
			cout << "f1(x) = " << RBPO::Lab2::Variant16::Task5::f1(x) << endl
				<< "f2(x) = " << RBPO::Lab2::Variant16::Task5::f2(x) << endl
				<< "f3(n) = " << RBPO::Lab2::Variant16::Task5::f3(n) << endl
				<< "f4(eps) = " << RBPO::Lab2::Variant16::Task5::f4(eps) << endl;
			break;

		case 'Q':
			break;

		default:
			cout << "Neprav" << endl;
			break;
		}
	} while (q != 'Q');
	return 0;
};
/*
1
10 15 2
2
10 15 2
3
10 15 2
4
10 15 2
5
10 15 2
*/