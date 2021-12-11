#include<iostream>
#include "string"
#include <iomanip>
#include <cstdlib>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k;
	float* sum, *coefficient;
	cout << "���������, ����������� ����� ������� �������� ������ ����� ��� ������ ������"  << endl;
	cout << "������� ���������� ���������: " << endl;;
	cin >> k;
	float **a = new float*[k];
	sum = new float[k];
	coefficient = new float[k];
	//������ ��������� ������:
	for (int i = 0; i < k; i++) 
	{
		a[i] = new float[k];
		for (int j = 0; j < k; j++)
		{
		}
	}
	for (int i = 0; i < k - 1; i++) {
		for (int j = i + 1; j < k; j++) {
			cout << "������� ����������� ��������� ��������" << i + 1 << " � �������� " << j + 1 << endl;
			cin >> a[i][j];
			//������ ��������, ����� � ���������� �� �������� ������ �� 0
			if (a[i][j] == 0) { cout << "������� ������������ ������, ��������� ���� ������"; break; }
			//��������� ���������� ������, ��� ������������ ������ ��������
			a[j][i] = 1 / a[i][j];
		}
	}
	//������� ������������ ����� ������ � ���� �� ����������
	for (int i = 0; i < k; i++) {
		for (int j = i; j < k; j++) {
			if (i == j) {
				a[i][j] = 1;
			}
		}
	}
	float s = 0;//����� �� ���� ���������
	for (int i = 0; i < k; i++) 
	{
		sum[i] = 0;
		for (int j = 0; j < k; j++) 
		{
			sum[i] = sum[i] + a[i][j];

		}
		s = s + sum[i];
	}
	//������� ������������		
	for (int i = 0; i < k; i++) 
	{
		coefficient[i] = sum[i] / s;
		coefficient[i] = round(coefficient[i] * 100) / 100;
		cout << "������� ����������� ��� �������� " << i + 1 << " ����� " << coefficient[i] << endl;
	}

}




