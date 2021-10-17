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
	std::cout << "Age in years: " << age_in_years << std::endl;
	switch (age_in_years)
	{
	case 1:
		age_in_years > 2;
		std::cout << "Animal is dead" << std::endl;
		break;
	case 2:
		age_in_years <= 2;
		std::cout << "Animal is alive" << std::endl;
		break;
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

	cout <<"Distance travelled before moving "<< m_fTotal_length << "\n";
	float random_number = distr(eng);
	m_fTotal_length += random_number;
	//cout << "random number " << random_number << "\n";
	cout << "Distance travelled after moving " << m_fTotal_length << "\n";
	
}