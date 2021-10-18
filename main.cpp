/*
 * main.cpp
 *
 *  Created on: Oct 13, 2021
 *  Author: Kavita Suryawanshi
 */

#include "CZoo.h"
#include "CCarnivore.h"
#include "CHerbivore.h"
#include "CDolphin.h"		

int main(int argc, char* argv[]) {
	CCarnivore lion("Lion", 1200, 120.0, "roar");
	CHerbivore elephant("Elephant", 300, 100.0, "trumpet");
	CHerbivore monkey("Monkey", 1500, 80.0, "chatter");
	CDolphin dolphin("Dolphin", 4000, 150.0, "click");
	CCarnivore tiger("Tiger", 2000, 13.0, "roar");
	
	CZoo MyZoo;
	MyZoo.add_animals(&lion);
	MyZoo.add_animals(&elephant);
	MyZoo.add_animals(&monkey);
	MyZoo.add_animals(&dolphin);
	MyZoo.add_animals(&tiger);
	
	return 0;
}
