#include<iostream>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int otv = 0;
	do {
		cout << "\t\t\t#################################################\n\t\t\t# BMI Calculator # \t\t\t\t#\n\t\t\t################## Creator by Akzhigitov Olzhas #\n\t\t\t\t\t #\t\t\t\t#\n\t\t\t\t\t ################################\n";
		double BMI = 0, height = 0, weight = 0;
		cout << "������� ��� ����: " << endl;
		cin >> height;
		height = height / 100;
		cout << "������� ��� ���: " << endl;
		cin >> weight;
		BMI = weight / (pow(height, 2));
		cout << "��� BMI: " << BMI << endl;
		if (BMI < 16 && BMI < 16) {
			cout << "� ��� ���������� ������� ����� ����\n " << endl;
		}
		else if (BMI > 16 && BMI < 18.5) {
			cout << "� ��� ������������� ����� ����\n" << endl;
		}
		else if (BMI > 18.5 && BMI < 24.99) {
			cout << "� ��� ���������� ��� ���� \n" << endl;
		}
		else if (BMI > 25 && BMI <= 30) {
			cout << "� ��� ��������� ������ �������� \n" << endl;
		}
		else if (BMI > 30 && BMI < 40) {
			cout << "� ��� ��������\n " << endl;
		}
		else if (BMI > 40) {
			cout << "� ��� ����������� ��������\n " << endl;
		}
		cout << "������� 1 ����� ��������� ��� ����� ������� ����� ����� \n";
		cin >> otv;
		system("cls");
		//cout << "##################################################################################" << endl;
	} while (otv==1);
	
	
	return 0;
}