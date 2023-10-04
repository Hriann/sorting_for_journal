#pragma once
#include <iostream>
#include "Structs.h"
#include "Enums.h"
using namespace std;

void add(Family[], int);

Child input();
void input(Parent*);

void remove(Family[], int, int);


void Cout(Child);
void Cout(Parent);

void Cout(Family[], int);