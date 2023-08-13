#include <iostream>
#include <time.h>

using namespace std;
//---------------------������� � ���������---------------------------------------

double RandFloat(double min, double max, int precision)
{
	//srand(time(NULL));

	double value;

	// �������� ��������� ����� ��� ����� ����� � �������� precision
	value = rand() % (int)pow(10, precision);

	// v = 194 % (int) pow (10,2)
	// v = 194 % 100
	// v = 94

	// �������� ������������ �����
	value = min + (value / pow(10, precision)) * (max - min);

	// v = 2 + (94 / 100 ) * (5 - 2)
	// v = 2 + (0.94) * 3
	// v = 2 + 2,82
	// v = 4.82         - ��������� ����� ( �� 2 �� 5 � �������� 2 ����� ����� ������� )

	return value;
}



//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------���� �����-------------------------------------

	int size;
	double rezult = 0;

	cout << "������� ������ �������: ";
	cin >> size;

	double* arr = new double[size];     

	cout << endl << "��������������� ������: " << endl;

	for (int i = 0; i < size; i++)
	{
		arr[i] = RandFloat(-5,5,4);

		cout << arr[i] << "  ";
	}

	for (int i = 0; i < size; i++)
	{
		if (fabs(arr[i]) > 2.5)
		{
			rezult = rezult + pow(arr[i], 2);
		}
	}

	cout << endl << "����� ��������� ���� ��������� , ������� �� ������ ������ 2.5 ����� :  " << rezult << endl << endl;


	delete[] arr;

	system("pause");

	return 0;
}
