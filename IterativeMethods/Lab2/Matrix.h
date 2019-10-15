#pragma once
#include <fstream>
#include <string>

using namespace std;

const int maxiter = 50000;
const float eps = 1e-43;

struct Matrix
{
	float** A;
	int N;
	int di_num;
	int m; 
};

void ReadMatrix(Matrix& M);										// ������ �������
void ReadX0(float* x0, int& N);									// ������ ���������� �����������
void ReadF(float* f, int& N);									// ������ ������ �����
void Multiply(Matrix& M, float* vec, float* res);				// ��������� ������� �� ������
float Norm(float* vec, int& N);									// ����� �������
float RelativeDifference(Matrix& M, float* f, float* x);		// ������������� �������
int Jacobi(Matrix& M, float* f, float* x0, float* x, float w);	// ����� �����
int Seidel(Matrix& M, float* f, float* x0, float* x, float w);	// ����� �������
