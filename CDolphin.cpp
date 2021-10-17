/*
 * CDolphin.cpp
 *
 *  Created on: Oct 13, 2021
 *      Author: Kavita Suryawanshi
 */

#include "CDolphin.h"
#include <iostream>
#include <string>

using std::string;
using namespace std;


CDolphin::CDolphin(std::string name, int age, double weight, std::string sound = "clicks") {
	m_sName = name;
	m_iAge = age;
	m_dWeight = weight;
	m_sSound = "clicks";
}


// This method is to get the status of an animal based on its age

void CDolphin::status() {

	int age_in_years = m_iAge / 365;
	std::cout << "Age in years: " << age_in_years << std::endl;
	std::cout << "Animal is alive and never dies by age" << std::endl;
}

// This method is to get weight of an animal after hunting
void CDolphin::hunt() {
	std::cout << "weight after hunting: " << m_dWeight << std::endl;
}

// This method is to feed and to get increased weight of an animal
void CDolphin::feed() {
	std::cout << "weight before eating: " << m_dWeight << std::endl;
	m_dWeight += 1.5;
	std::cout << "weight after eating: " << m_dWeight << std::endl;
}