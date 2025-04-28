#include <iostream>
#include <vector>
using namespace std;




//int solution1() {
//	int A, B;
//	cout << "Enter first number";
//	cin >> A;
//	cout << "Enter second number";
//	cin >> B;
//	int* ptrA = &A;
//	int* ptrB = &B;
//	cout << endl << A << endl << &A << endl << B << endl << &B << endl << ptrA << endl << &ptrA << endl << ptrB << endl << &ptrB;
//}
int main() {
	vector<int> vect;
	cout << "cout values for vector:"
		for (int i = 0; i < 10; i++) {
			cin >> vect.pushback();
		}
	int max = vect[0];
	int* pos;
	for (int i = 0; i < vect.size(); i++) {
		{
			if (vect[i] > max) {
				max = vect[i];
				pos = &vect[i];
			}
		}
	}
	cout << pos;
}
