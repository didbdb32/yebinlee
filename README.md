#include<iostream>
int main()
{
	int name;
	int cola;
	int samdasu;
	int fanta;
	int num1;
	int num2;
	int num3;
	int sum;

	std::cout << "당신의 이름은 무엇입니까? ";
	std::cin >> name;
	std::cout << "반갑습니다. " << name << "님" << std::endl;

	std::cout << "-------SWING 30-------" << std::endl;
	std::cout << "음료의 가격 입력을 시작합니다." << std::endl;
	std::cout << "콜라의 가격 : ";
	std::cin >> cola;
	std::cout << "삼다수의 가격 : ";
	std::cin >> samdasu;
	std::cout << "환타의 가격 : ";
	std::cin >> fanta;

	std::cout << "개수를 입력해주세요." << std::endl;
	std::cout << "콜라 수량 : ";
	std::cin >> num1;
	std::cout << "삼다수 수량 : ";
	std::cin >> num2;
	std::cout << "환타 수량 : ";
	std::cin >> num3;

	std::cout << "------------------------------" << std::endl;
	sum = (num1*cola) + (num2*samdasu) + (num3*fanta) - 500;
	std::cout << "500원을 할인받아 총" << sum << "원 입니다.";
	return 0;
}
