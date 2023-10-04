#include <Windows.h>
#include "Header.h"

const int A = 5;
Family some_family[A];

void main()
{
	int a = 1, b = 0;
	while (a)
	{
		system("cls");

		cout << "1. Add an entry\n2. Delete an entry\n3. Show the entire array\n4. Exit" << endl;
		cin >> b;

		switch (b)
		{
		case adds:
			add(some_family, A);
			system("pause");
			break;

		case removes:
			Cout(some_family, A);
			cout << "\nEnter the number of the structure you want to delete (1-5):"; cin >> b;
			remove(some_family, A, b);
			system("pause");
			break;

		case prints:
			Cout(some_family, A);
			system("pause");
			break;

		case Exit:
			a = 0;
			break;
		}

	}

	system("pause");
}