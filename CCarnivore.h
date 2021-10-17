#pragma once
/*
 * CCarnivore.h
 *
 *  Created on: Oct 13, 2021
 *  Author: Kavita Suryawanshi
 */
#include "CAnimal.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <random>

using namespace std;
using std::string;

#ifndef CCARNIVORE_H_
#define CCARNIVORE_H_

class CCarnivore : public CAnimal
{
public:
	CCarnivore(std::string name, int age, double weight, std::string sound);
	void eat(CAnimal* animal);
	void kill();
	void status();
	void hunt();
};

#endif /* CCARNIVORE_H_ */