#include <iostream>
using namespace std;
const int A = 7;

struct Student {
	char Name[20];
	int Age;
	int Number;
}/*Student[A] {}*/;

void Cout(int a, char b[20], int c);

void main() {  
	int a = 1, b = 0, c = 0, d = 0;
	string name;
	Student buff = { "?", 0, 0 };
	Student arr[A] = { {"Nikita", 18, 4}, {"Mariya", 18, 2}, {"Pavel", 17, 6}, {"Aleksandr", 18, 1}, {"Dmitry", 17, 5}, {"Nikolay", 18, 3}, {"Anya", 18, 7} };
	/*Student arr[7];
	for (int i = 0; i < 7; i++) {
			cout << "Enter the student's name: "; cin >> arr[i].Name;
			cout << "Enter the student's age: "; cin >> arr[i].Age;
			cout << "Enter the student's number in the list: "; cin >> arr[i].Number;
	}*/
	while (a) {
		int s = 0;

		for (int i = 0; i < A; i++) {
			Cout(arr[i].Age, arr[i].Name, arr[i].Number);
		}

		cout << "\n1. Sort by number in the list" << endl;
		cout << "2. Sort by age" << endl;
		cout << "3. Search" << endl;
		cout << "4. End" << endl; 
		cin >> b;

		switch (b) {

		case 1:
			while (s < A) {

				for (int i = 0; i < A - 1; i++) {

					if (arr[i].Number > arr[i + 1].Number) {
						buff = arr[i + 1];
						arr[i + 1] = arr[i];
						arr[i] = buff;
					}
				}
				s++;
			}
			break;

		case 2:
			while (s < A) {

				for (int i = 0; i < A - 1; i++) {

					if (arr[i].Age > arr[i + 1].Age) {
						buff = arr[i + 1];
						arr[i + 1] = arr[i];
						arr[i] = buff;
					}
				}
				s++;
			}
			break;

		case 3:
			system("cls");
			cout << "What are you interested in?\n1. Name\n2. Age\n3. Number" << endl;
			cin >> c;
			if (c > 3) { cout << "Error" << endl; system("pause"); }
			switch (c) {
			case 1:
				cout << "Enter the name: "; cin >> name;

				for (int i = 0; i < A; i++) {
					if (name == arr[i].Name) {
						cout << arr[i].Age << " " << arr[i].Name << " " << arr[i].Number << endl;
					}
				}
				system("pause");
				break;
			case 2:
				cout << "Enter the age: "; cin >> d;

				for (int i = 0; i < A; i++) {
					if (d == arr[i].Age) {
						cout << arr[i].Age << " " << arr[i].Name << " " << arr[i].Number << endl;
					}
				}
				system("pause");
				break;
			case 3:
				cout << "Enter the number: "; cin >> d;

				for (int i = 0; i < A; i++) {
					if (d == arr[i].Number) {
						cout << arr[i].Age << " " << arr[i].Name << " " << arr[i].Number << endl;
					}
				}
				system("pause");
				break;
			}
			break;

		case 4:
			a = 0;
			break;
		}

		system("cls");
	}
	system("pause");
}

void Cout(int a, char b[20], int c) {
		cout << a << " ";
		cout << b << " ";
		cout << c << endl;
}