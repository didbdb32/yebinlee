#include<iostream>
using namespace std;

void total() {
	int bank[4] = { 5000,4000,0,10 };
	int total_money = 0;
	total_money = bank[0] + bank[1] + bank[2] + bank[3];
}

void myaccounts() {

	char bank_name[4] = { '�ϳ�','�츮','����','����'};
	int bank[4] = { 5000,4000,0,10 };
	cout << "���� �� ��������" << endl;
	cout << bank_name[0] << " | " << bank_name[1] << " | " << bank_name[2] << " | " << bank_name[3] << endl;
	cout << bank[0] << "  |  " << bank[1] << "  |  " << bank[2] << "  |  " << bank[3] << endl;

}

int main(void) {
	
	char bank_name[4] = { '�ϳ�','�츮','����','����' };
	int bank[4] = { 5000,4000,0,10 };
	int total_money = 0;
	cout << "*******SWING �ڻ���� ����*********" << endl;
	myaccounts();
	total();
	cout << "���� SWING �ڻ���� ���񽺿� ��ϵ� ȸ������ �� �ڻ���" << total_money << "�� �Դϴ�.";
}