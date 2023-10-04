#pragma once

struct Child
{
	int type;
	char name[50];
	int age;
	int year;
};

struct Parent
{
	int type;
	char name[50];
	int age;
	int year;
};

union Family
{
	Child Child;
	Parent Parent;
};