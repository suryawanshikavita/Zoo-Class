/*
 * CAnimal.cpp
 *
 *  Created on: Oct 13, 2021
 *  Author: Kavita Suryawanshi
 */

#include "CAnimal.h"

CAnimal::CAnimal() {
	m_sName = "Animal";
	m_iAge = 1200; 
	m_dWeight = 10.0;
	m_sStatus = "";
	m_sSound = "";
}

CAnimal::CAnimal(std::string name, int age, double weight, std::string sound) {
	m_sName = name;
	m_iAge = age;
	m_dWeight = weight;
	m_sSound = sound;
}
CAnimal::~CAnimal() {
	//cout << m_sName << " is killed" << endl; //
}
// Setter function for animal name
void CAnimal::setName(std::string name) {
	m_sName = name;
}
// Setter function for animal age
void CAnimal::setAge(int age) {
	m_iAge = age;
}
// Setter weight for animal weight
void CAnimal::setWeight(double weight) {
	m_dWeight = weight;
}
// getter function for animal name
std::string CAnimal::getName() {
	return m_sName;
}
// getter function to get animal sound
std::string CAnimal::getSound() {
	return m_sSound;
}
// getter function to get animal age
int CAnimal::getAge() {
	return m_iAge;
}
// getter frunction to get animal weight
double CAnimal::getWeight() {
	return m_dWeight;
}

// This method is to feed and to get increased weight of an animal
void CAnimal::feed() {
	cout << this->getName() << "'s weight before eating: " << m_dWeight << endl;
	m_dWeight += 0.5;
	cout << this->getName() << "'s weight after eating: " << m_dWeight << endl;
}

// This method is to get the status of an animal based on its age
void CAnimal::status() {

	int age_in_years = m_iAge / 365;
	//cout << "Age in years: " << age_in_years << endl;
	if (age_in_years >= 1) {
		cout << this->getName() << " is older" << endl;
	}
	else {
		cout << this->getName() << " is young" << endl;
	}
}

// This method is to get the change in weight of an animal after its movement
void CAnimal::move() {
	cout << this->getName() <<"'s weight before moving: " << m_dWeight << endl;
	m_dWeight -= 0.25;
	cout << this->getName() << "'s weight after moving: " << m_dWeight << endl;
}

void CAnimal::kill() {
	cout << this->getName() << " got killed" << endl;
}

//This method is to get the age of an animal
// Input int x : To increase age of an animal by x days
void CAnimal::aging( int x) {

	m_iAge += x; //increase age by x days
	int increased_age = m_iAge / 365;
	//cout << "Animal's current age is " << increased_age << " years" << endl;
	cout << this->getName() << "'s age increased by " << x << " days and current age is " << increased_age  << " years and " << m_iAge % 365 << " days" << endl;

}
 
void CAnimal::eat(CAnimal* animal) {
	
}

void CAnimal::moving() {

}
