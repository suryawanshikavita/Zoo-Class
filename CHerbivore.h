#pragma once
/*
 * CHerbivore.h
 *
 *  Created on: Oct 13, 2021
 *  Author: Kavita Suryawanshi
 */
#include "CAnimal.h"
#include <iostream>
#include <random>
#include <iomanip>
#include "CDolphin.h"

using namespace std;
using std::string;
using std::setprecision;

#ifndef CHERBIVORE_H_
#define CHERBIVORE_H_

class CHerbivore : public CAnimal
{
public:
	CHerbivore(std::string name, int age, double weight, std::string sound);
	void status();
	void moving();
};


#endif /* CHERBIVORE_H_ */
