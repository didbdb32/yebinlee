#include<iostream>
using namespace std;

void total() {
	int bank[4] = { 5000,4000,0,10 };
	int total_money = 0;
	total_money = bank[0] + bank[1] + bank[2] + bank[3];
}

void myaccounts() {

	char bank_name[4] = { '하나','우리','신한','국민'};
	int bank[4] = { 5000,4000,0,10 };
	cout << "은행 별 계좌정보" << endl;
	cout << bank_name[0] << " | " << bank_name[1] << " | " << bank_name[2] << " | " << bank_name[3] << endl;
	cout << bank[0] << "  |  " << bank[1] << "  |  " << bank[2] << "  |  " << bank[3] << endl;

}

int main(void) {
	
	char bank_name[4] = { '하나','우리','신한','국민' };
	int bank[4] = { 5000,4000,0,10 };
	int total_money = 0;
	cout << "*******SWING 자산관리 서비스*********" << endl;
	myaccounts();
	total();
	cout << "현재 SWING 자산관리 서비스에 등록된 회원님의 총 자산은" << total_money << "원 입니다.";
}