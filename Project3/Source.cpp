#include<iostream>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int otv = 0;
	do {
		cout << "\t\t\t#################################################\n\t\t\t# BMI Calculator # \t\t\t\t#\n\t\t\t################## Creator by Akzhigitov Olzhas #\n\t\t\t\t\t #\t\t\t\t#\n\t\t\t\t\t ################################\n";
		double BMI = 0, height = 0, weight = 0;
		cout << "Введите ваш рост: " << endl;
		cin >> height;
		height = height / 100;
		cout << "Введите ваш вес: " << endl;
		cin >> weight;
		BMI = weight / (pow(height, 2));
		cout << "Ваш BMI: " << BMI << endl;
		if (BMI < 16 && BMI < 16) {
			cout << "У вас выраженный дефицит массы тела\n " << endl;
		}
		else if (BMI > 16 && BMI < 18.5) {
			cout << "У вас недостаточная масса тела\n" << endl;
		}
		else if (BMI > 18.5 && BMI < 24.99) {
			cout << "У вас нормальный вес тела \n" << endl;
		}
		else if (BMI > 25 && BMI <= 30) {
			cout << "У вас начальная стадия ожирения \n" << endl;
		}
		else if (BMI > 30 && BMI < 40) {
			cout << "У вас ожирение\n " << endl;
		}
		else if (BMI > 40) {
			cout << "У вас критическое ожирение\n " << endl;
		}
		cout << "Введите 1 чтобы повторить или любую клавишу чтобы выйти \n";
		cin >> otv;
		system("cls");
		//cout << "##################################################################################" << endl;
	} while (otv==1);
	
	
	return 0;
}