#include <iostream>
#include "Header.hpp"

int mas[100][100];

int main()
{
	int n;
	std::cin >> n;
	newMatrix(mas, n);
	bool flag = false;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (isPrime(abs(mas[i][j])) == true) flag = true;
		}
	}
	if (columns(mas, n) == false || flag == false) {
		std::cout << "No changes to the matrix\n";
		printMatrix(mas, n);
	}
	else {
		std::cout << "Conditions are met\n";
		int Rows[100];		// contains sums of all rows of the matrix
		for (int i = 0; i < n; i++) {
			Rows[i] = sumOfRow(mas, n, i);
		}
		for (int i = 0; i < n-1; i++) {
			for (int k = i; k < n; k++) {
				if (Rows[i] > Rows[k]) {
					for (int j = 0; j < n; j++) {
						std::swap(mas[i][j], mas[k][j]);
					}
				}
			}
		}
		printMatrix(mas, n);
	}
}
