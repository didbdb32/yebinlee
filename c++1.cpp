#include<iostream>
using namespace std;
int main()
{
	
	srand((unsigned)time(NULL));
	int num1 = rand() % 101;//���� �Լ��� �̿��Ͽ� ������ ���� ����� �� �ֵ��� ��.
	int num2;

	cout << "������ �� : " << num1 << endl;
	cout << "Ư����� ���� : ";
	cin >> num2;
	 

	for (int i = 0;i < num2;i++)//�Է¹��� Ư����� ������ŭ �ݺ��ǰ� �Ѵ�
	{
		int num3;
		cout << i << "��° Ư�� ��� : ";
		cin >> num3;
		cout << "<Ư������� ����ϴ� ���α׷�>" << endl;
		for (int n = 1;n <= num1;n++)
		{
			if (n % num3 == 0)//n�� �Է¹��� Ư�� ����� ����������� ����Ѵ�
			{
				cout << n << ",";
			}
		}
		cout<< endl;
		cout << "<Ư����� ���� ����ϴ� ���α׷�>" << endl;
		for (int n = 1;n <= num1;n++)
		{
			if (n % num3 != 0)//n�� �Է¹��� Ư�� ����� ����������� ������ ����Ѵ�
			{
				cout << n << ",";
			}
		}
		cout << endl;
	}
}