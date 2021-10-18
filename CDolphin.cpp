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
	cout << this->getName() << "'s age in years: " << age_in_years << " years and " << m_iAge % 365 << " days" << endl;
	cout << this->getName() << " is alive and never dies by age" << endl;
}

// This method is to get weight of an animal after hunting
void CDolphin::hunt() {
	cout << this->getName() << "'s weight does not change after hunting: " << m_dWeight << endl;
}

// This method is to feed and to get increased weight of an animal
void CDolphin::feed() {
	cout << this->getName() << "'s weight before feed: " << m_dWeight << endl;
	m_dWeight += 1.5;
	cout << this->getName() << "'s weight after feed: " << m_dWeight << endl;
}
