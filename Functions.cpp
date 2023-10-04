#include "Header.h"


Child input()
{
	Child a; a.type = child;
	cout << "Enter the child's name: "; cin >> a.name;
	cout << "Enter the child's age: "; cin >> a.age;
	cout << "Enter the child's year of birth: "; cin >> a.year;

	return a;
}

void input(Parent* p)
{
	p->type = parent;
	cout << "Enter the parent's name: "; cin >> p->name;
	cout << "Enter the parent's age: "; cin >> p->age;
	cout << "Enter the parent's year of birth: "; cin >> p->year;
}


void add(Family family[], int A)
{
	int a = 0;

	for (int i = 0; i < 5; i++)
	{
		if (family[i].Child.type == 0)
		{
			cout << "\nChoose who you want to add:\n1. Child\n2. Parent" << endl;
			cin >> a;

			switch (a)
			{
			case 1:
				family[i].Child = input();
				break;

			case 2:
				input(&family[i].Parent);
				break;

			default:
				cout << "\nError" << endl;
				break;
			}

			break;
		}

		if (i == 4)
		{
			cout << "\nAll structures are filled" << endl;
		}
	}
}


void remove(Family family[], int A, int b)
{	--b;
	
	switch (family[b].Child.type)
	{
	case child:
	case parent:
		family[b].Parent.type = 0;
		break;

	default:
		cout << "Void" << endl;
		return;
		break;
	}

	cout << "Deleted" << endl;
}


void Cout(Child a)
{
	cout << "Child:\n" << "	Name: " << a.name << " Age: " << a.age <<" Year of birth: " << a.year << endl;
}

void Cout(Parent a)
{
	cout << "Parent:\n" << " Name: " << a.name << "\n Age: " << a.age << "\n Year of birth: " << a.year << endl;
}

void Cout(Family family[], int A)
{
	cout << "\nEntries:" << endl;

	for (int i = 0; i < A; i++)
	{
		cout << "Entrie No." << i + 1 << endl;

		switch (family[i].Child.type)
		{
		case child:
			Cout(family[i].Child);
			break;

		case parent:
			Cout(family[i].Parent);
			break;

		default:
			cout << "Void" << endl;
			break;
		}
	}
}