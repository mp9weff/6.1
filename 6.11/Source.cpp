//ітернаційний спосіб
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int Number(int* p, const int size) {
	int n = 0;
	for (int i = 0; i <= size; i++) {
		if(p[i] == 0 && p[i] > 0)
			n++;

	}
	return n;
}
void Create(int* p, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		p[i] = Low + rand() % (High - Low + 1);
}
void Print(int* p, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << p[i];
	cout << endl;
}

int Sum(int* p, const int size) {
	int s = 0;
	for (int i = 0; i <= size; i++) {
		if(p[i] == 0 && p[i] > 0)
			s += p[i];
	}
	return s;

}

void Change(int* p, const int size) {
	for (int i = 0; i <= size; i++) {
		if(p[i] == 0 && p[i] > 0)
			p[i] = 0;
	}
}

int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 24;
	int p[n];
	int Low = -10;
	int High = 14;
	Create(p, n, Low, High);
	Print(p, n);
	int number = Number(p, n);
	cout << "Numbers: " << endl;
	cout << number;
	int sum = Sum(p, n);
	cout << "\nSum: " << endl;
	cout << sum;
	cout << endl;
	Change(p, n);
	Print(p, n);


	return 0;

}
