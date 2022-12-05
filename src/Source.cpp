#include "Header.hpp"
#include <iostream>

void newMatrix(int(*mas)[100], int n) {
	std::cout << "Enter matrix: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cin >> mas[i][j]; 
		}
	}
}

void printMatrix(int(*mas)[100], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << mas[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

bool isPrime(int x) {
	if (x < 2)
		return false;
	for (int d = 2; d <= sqrt(x); d++) {
		if (x % d == 0)
			return false;
	}
	return true;
}

bool columns(int(*mas)[100], int n) {		//checks if there are at least 2 same columns in a matrix
	bool hasSameColumns = false;
	for (int j = 0; j < n-1; j++) {
		for (int t = j + 1; t < n; t++) {
			for (int i = 0; i < n; i++) {
				if (mas[i][j] != mas[i][t]) break;
				if (i == n) {
					hasSameColumns = true;
					return hasSameColumns;
				}
			}
		}
	}
}

void changeMatrix(int(*mas)[100], int n) {
	int sum[100];
	for (int i = 0; i < n; i++) {
		int sumOfRow = 0;
		for (int j = 0; j < n; j++) {
			sumOfRow += abs(mas[i][j]);
		}
	}
}

int sumOfRow(int(*mas)[100], int n, int i) {
	int sum = 0;
	for (int j = 0; j < n; j++) {
		sum += abs(mas[i][j]);
	}
	return sum;
}

