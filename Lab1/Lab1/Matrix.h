#pragma once

#include <fstream>

typedef float real;

void ReadMatrixSize(int& N, int& ALsize);										// ������ ������� �������

void ReadMatrix(int& N, int& ALsize, real* DI, real* AL, real* AU, int* IA);	// ������ ������� � ���������� �������

void LUDecomposition(int& N, real* DI, real* AL, real* AU, int* IA);			// ���������� ������� � �� ������� L � U

void Solve(int& N, real* DI, real* AL, real* AU, int* IA, real* B);				// ������� ����