#pragma once
/*
 * CAnimal.h
 *
 *  Created on: Oct 13, 2021
 *  Author: Kavita Suryawanshi
 */

#ifndef CANIMAL_H_
#define CANIMAL_H_
#include <string>
#include <iostream>
#include <iomanip>

using std::string;
using namespace std;

class CAnimal {
protected:
	std::string m_sName;
	int m_iAge; //age of an animal in days
	double m_dWeight;
	std::string m_sStatus;
	std::string m_sSound;
	float m_fTotal_length;

public:
	CAnimal();
	CAnimal(std::string name, int age, double weight, std::string sound);
	virtual ~CAnimal(); 
	void setName(std::string name);  
	void setAge(int age);			
	void setWeight(double weight);
	std::string getName();
	int getAge();
	double getWeight();		
	std::string getSound();
	void feed(); 
	void move();
	void status();
	void kill();
	void aging(int x);
	virtual void moving();
	virtual void eat(CAnimal* animal);
};

#endif /* CANIMAL_H_ */
