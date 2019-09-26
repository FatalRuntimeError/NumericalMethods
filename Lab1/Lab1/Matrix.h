#pragma once
#include <fstream>
#include <iostream>

typedef float real;

struct Matrix
{
	real* DI;
	real* AL;
	real* AU;
	int* IA;
	int N;
	int ALSize;
	bool isDecomposed = false;
};

void ReadMatrixSize(int& N, int& ALsize);			// ������ ������� �������
void ReadMatrix(Matrix& mat);						// ������ ������� � ���������� �������
void ReadB(real* B, int& N);						// ������ ������ ����� b
void LUDecomposition(Matrix& mat);					// ���������� ������� � �� ������� L � U
void Solve(Matrix& mat, real* B, real* Y, real* X);	// ������� ����
void Multiply(Matrix& mat, real* vec, real* res);	// ��������� ������� �� ������
Matrix HilbertMatrix(int size);						// �������� ������� ��������� ������� size