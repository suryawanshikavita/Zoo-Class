#pragma once
/*
*
* CZoo.h
*
* Created on : Oct 13, 2021
* Author : Kavita Suryawanshi
*/


#ifndef CZOO_H_
#define CZOO_H_
#include "CAnimal.h"
#include "CCarnivore.h"
#include "CHerbivore.h"
#include "CDolphin.h"
#include<vector>
#include <iostream>
#include <random>
#include <iomanip>
#include <stdlib.h>
using std::setprecision;
#define quote(x) #x

using std::string;
using namespace std;

class CZoo
{
public:
	std::vector<CAnimal*> Zoo;
	void total_animals();
	void add_animals(CAnimal* new_animal);
	void feed();
	void eat();
	void aging(int x);

};
#endif /* CZOO_H_ */