#include<iostream>
#include<string>

int main()
{
	int cola;
	int samdasu;
	int fanta;
	int num1;
	int num2;
	int num3;
	int sum;

	std::cout << "����� �̸��� �����Դϱ�? ";
	std::string name;
	getline(std::cin, name);
	std::cout << "�ݰ����ϴ�. " << name << "��" << std::endl; /*�̸��� �Է¹ް� ���� �̸��� �����*/

	std::cout << "-------SWING 30-------" << std::endl;
	std::cout << "������ ���� �Է��� �����մϴ�." << std::endl;
	std::cout << "�ݶ��� ���� : ";
	std::cin >> cola;
	std::cout << "��ټ��� ���� : ";
	std::cin >> samdasu;
	std::cout << "ȯŸ�� ���� : ";
	std::cin >> fanta; /*�ݶ�, ��ټ�, ȯŸ�� ������ �Է¹���*/

	std::cout << "������ �Է����ּ���." << std::endl;
	std::cout << "�ݶ� ���� : ";
	std::cin >> num1;
	std::cout << "��ټ� ���� : ";
	std::cin >> num2;
	std::cout << "ȯŸ ���� : ";
	std::cin >> num3; /*�ݶ�, ��ټ�, ȯŸ�� ������ �Է¹���*/

	std::cout << "------------------------------" << std::endl;
	sum = (num1*cola) + (num2*samdasu) + (num3*fanta) - 500; /*�ݶ�, ��ټ�, ȯŸ ������ ������ ������ ���� �� ��� ���ϰ� ���ΰ��� 500�� �����Ͽ� �� ���� ������*/
	std::cout << "500���� ���ι޾� ��" << sum << "�� �Դϴ�.";/*����� �� ���� �����*/
	return 0;
}