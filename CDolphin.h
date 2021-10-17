#pragma once
/*
 * CDolphin.h
 *
 *  Created on: Oct 13, 2021
 *      Author: Kavita Suryawanshi
 */
#include "CAnimal.h"
#ifndef CDOLPHIN_H_
#define CDOLPHIN_H_

class CDolphin : public CAnimal
{
public:
	//CDolphin();
	CDolphin(std::string name, int age, double weight, std::string sound);
	//virtual ~CDolphin();
	void status();
	void hunt();
	void feed();
};

#endif /* CDOLPHIN_H_ */
