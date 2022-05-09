#include<iostream>
using namespace std;
int main()
{
	
	srand((unsigned)time(NULL));
	int num1 = rand() % 101;//랜덤 함수를 이용하여 랜덤한 수를 출력할 수 있도록 함.
	int num2;

	cout << "랜덤한 수 : " << num1 << endl;
	cout << "특정배수 개수 : ";
	cin >> num2;
	 

	for (int i = 0;i < num2;i++)//입력받은 특정배수 개수만큼 반복되게 한다
	{
		int num3;
		cout << i << "번째 특정 배수 : ";
		cin >> num3;
		cout << "<특정배수만 출력하는 프로그램>" << endl;
		for (int n = 1;n <= num1;n++)
		{
			if (n % num3 == 0)//n이 입력받은 특정 배수와 나누어떨어지면 출력한다
			{
				cout << n << ",";
			}
		}
		cout<< endl;
		cout << "<특정배수 제외 출력하는 프로그램>" << endl;
		for (int n = 1;n <= num1;n++)
		{
			if (n % num3 != 0)//n이 입력받은 특정 배수와 나누어떨어지지 않으면 출력한다
			{
				cout << n << ",";
			}
		}
		cout << endl;
	}
}