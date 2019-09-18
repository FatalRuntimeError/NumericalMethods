#pragma once
#include <fstream>

typedef float real;

struct Matrix
{
	real* DI;
	real* AL;
	real* AU;
	int* IA;
	int N;
	int ALSize;
};

void ReadMatrixSize(int& N, int& ALsize);			// ������ ������� �������
void ReadMatrix(Matrix mat);						// ������ ������� � ���������� �������
void ReadB(real* B, int& N);						// ������ ������ ����� b
void LUDecomposition(Matrix mat);					// ���������� ������� � �� ������� L � U
void Solve(Matrix mat, real* B, real* Y, real* X);	// ������� ����