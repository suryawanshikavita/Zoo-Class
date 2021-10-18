/*
 * CHerbivore.cpp
 *
 *  Created on: Oct 13, 2021
 *  Author: Kavita Suryawanshi
 */


#include "CHerbivore.h"

CHerbivore::CHerbivore(std::string name, int age, double weight, std::string sound) {
	m_sName = name;
	m_iAge = age;
	m_dWeight = weight;
	m_sSound = sound;
	m_fTotal_length = 0.0;
}

// This method is to get the status of an animal based on its age
void CHerbivore::status() {

	int age_in_years = m_iAge / 365;
	cout << this->getName() << "'s age in years: " << age_in_years << " years and " << m_iAge % 365 << " days" << endl;
	if (age_in_years >= 2) {
		cout << this->getName() << " got old and dead" << endl;
	}
	else {
		cout << this->getName() << " is young and alive" << endl;
	}
}

// This method is to track the total length moved by an animal
void CHerbivore::moving() {

	constexpr int FLOAT_MIN = 1.0;
	constexpr int FLOAT_MAX = 5.0;
	
	random_device rd;
	default_random_engine eng(rd());
	uniform_real_distribution<> distr(FLOAT_MIN, FLOAT_MAX);
	setprecision(3);

	cout << this->getName() << " traveled " << m_fTotal_length << " before moving " << endl;
	float random_number = distr(eng);
	m_fTotal_length += random_number;
	cout << this->getName() << " traveled " << m_fTotal_length << " after moving " << endl;
	
}
