#pragma once
#include <fstream>
#include <iostream>
#include <utility>

typedef double real;
typedef double realScal;

struct Matrix
{
	real *DI, *AL, *AU;
	int *IA;
	int N, ALSize;
	bool isDecomposed = false;
};

void ReadMatrixSize(int& N, int& ALsize);			// ������ ������� �������
void ReadMatrix(Matrix& mat);						// ������ ������� � ���������� �������
void ReadB(real* B, int& N);						// ������ ������ ����� b
void LUDecomposition(Matrix& mat);					// ���������� ������� � �� ������� L � U
void Solve(Matrix& mat, real* b);					// ������� ����
void Multiply(Matrix& mat, real* vec, real* res);	// ��������� ������� �� ������
Matrix HilbertMatrix(int size);						// �������� ������� ��������� ������� size
void ToTight(Matrix& m, real** A);					// ������� ������� � ������� ������