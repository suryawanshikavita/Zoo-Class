/*
 * CZoo.cpp
 *
 *  Created on: Oct 13, 2021
 *  Author: Kavita Suryawanshi
 */
#include "CZoo.h"

void CZoo::total_animals() {
	int count = 0;
	for (auto i = 0; i < Zoo.size(); i++) {
		count += 1;
	};
	cout << "Total number of animals are " << count << endl;
}

//This method is to add animals
// Input : Name of an animal to be added
void CZoo::add_animals(CAnimal* new_animal) {
	Zoo.push_back(new_animal);
}

// This method is to feed and to get increased weight of an animal
void CZoo::feed() {

	for (auto i = Zoo.begin(); i != Zoo.end(); i++) {
		(*i)->feed();
		//cout << (*i)->getName() << endl;
	};
}


// This method is to get weight of an animal
// Input animal : Pointer of an animal name, who is going to get eaten
void CZoo::eat() {

	int index_animal = rand() % Zoo.size();
	CCarnivore* carnivore;
	carnivore = dynamic_cast<CCarnivore*>(Zoo[index_animal]);
	
	for (auto i = Zoo.begin(); i < Zoo.end(); i++) {
		carnivore = dynamic_cast<CCarnivore*>((*i));
		if (carnivore != 0) {
			cout << "Animal " << (*i)->getName() << " killed " << Zoo[index_animal]->getName() << endl;
			(*i)->eat(Zoo[index_animal]);
			Zoo.erase(Zoo.begin() + index_animal);
			break;
		}
	}

}

//This method is to get the age of an animal
// Input: int x, to increase age of an animal by x days
void CZoo::aging(int n) {
	CHerbivore* herbivore;
	for (auto i = Zoo.begin(); i != Zoo.end(); i++) {
		int increased_age = (*i)->getAge(); //increase age by x days
		increased_age = ((*i)->getAge() +n)/ 365;
		cout << (*i)->getName() << "'s age increased by " << n << " days and current age is " << increased_age << " years and " << (*i)->getAge() % 365 << " days" << endl;
		
		herbivore = dynamic_cast<CHerbivore*>(*i);
		int displacement = 0;
		if (herbivore != 0) { //if animal is herbivore, it will move each day
			cout << "Object is herbivore: " << (*i)->getName() << endl;
			displacement += n;
			cout << "Total displacement of " << (*i)->getName() << " is : " << displacement << endl;
		}
		
	};
}
