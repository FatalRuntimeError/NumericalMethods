#pragma once
#include <fstream>
#include <iostream>

typedef double real;
typedef double realScal;

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
void Solve(Matrix& mat, real* B, real* res);		// ������� ����
void Multiply(Matrix& mat, real* vec, real* res);	// ��������� ������� �� ������
Matrix HilbertMatrix(int size);						// �������� ������� ��������� ������� size
void ToTight(Matrix& m, real** A);					// ������� ������� �� ����������� ������� � �������