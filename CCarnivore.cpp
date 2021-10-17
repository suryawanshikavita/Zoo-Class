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
	cout << "weight before hunting: " << m_dWeight << endl;
	m_dWeight += 1;
	cout << "weight after hunting: " << m_dWeight << endl;
}

// This method is to get weight of an animal
// Input Animal name: Pointer of an animal name who is going to get eaten
void CCarnivore::eat(CAnimal* animal) {
	cout << "weight before eating other animal: " << m_dWeight << endl;
	cout << "weight of animal to be eaten: " << animal->getWeight() << endl;
	
	m_dWeight += (animal->getWeight() / 2);
	animal->~CAnimal();
	cout << "weight after eating other animal: " << m_dWeight << endl;
}


void CCarnivore::kill() {
	if (m_iAge >= 3) {
		cout << "Animal got killed" << endl;
	}
}

// This method is to get the status of an animal based on its age
void CCarnivore::status() {

	int age_in_years = m_iAge / 365;
	cout << "Age in years: " << age_in_years << endl;
	switch (age_in_years)
	{
	case 1:
		age_in_years > 3;
		cout << "Animal is dead" << endl;
		break;
	case 2:
		age_in_years <= 3;
		cout << "Animal is alive" << endl;
		break;
	}

}