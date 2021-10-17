/*
 * CCarnivore.cpp
 *
 *  Created on: Oct 13, 2021
 *  Author: Kavita Suryawanshi
 */
#include "CCarnivore.h"

CCarnivore::CCarnivore(string name, int age, double weight, string sound){
	m_sName = name;
	m_iAge = age;
	m_dWeight = weight;
	m_sSound = sound;
}

// This method is to get weight of an animal after hunting
void CCarnivore::hunt() {
	cout << this->getName() << "'s weight before hunting: " << m_dWeight << endl;
	m_dWeight += 1;
	cout << this->getName() << "'s weight after hunting: " << m_dWeight << endl;
}

// This method is to get weight of an animal
// Input Animal name: Pointer of an animal name who is going to get eaten
void CCarnivore::eat(CAnimal* animal) {
	cout << this->getName() << "'s weight before eating " << animal->getName() << " is " << m_dWeight << endl;
	cout << animal->getName() << "'s weight (animal to be eaten): " << animal->getWeight() << endl;
	
	m_dWeight += (animal->getWeight() / 2);
	cout << this->getName() << "'s weight after eating " << animal->getName() << " is " << m_dWeight << endl;
	animal->~CAnimal();
}


void CCarnivore::kill() {
	if (m_iAge >= 3) {
		cout << "Animal got killed" << endl;
	}
}

// This method is to get the status of an animal based on its age
void CCarnivore::status() {

	int age_in_years = m_iAge / 365;
	cout << this->getName() << "'s age in years: " << age_in_years << " years and " << m_iAge % 365 << " days" << endl;
	if (age_in_years >= 3) {
		cout << this->getName() << " got old and dead" << endl;
	}
	else {
		cout << this->getName()  << " is young and alive" << endl;
	}

}
