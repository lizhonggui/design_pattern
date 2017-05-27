/*
 * main.cpp
 *
 *  Created on: May 25, 2017
 *      Author: ghosty
 */

#include "Factory.h"
#include "Product.h"

int main()
{
	AbstractFactory *factory1 = new Factory1();
	AbstractProductA *productA = factory1->CreateProductA();
	AbstractProductB *productB = factory1->CreateProductB();
	productA->Use();
	productB->Eat();
	delete productA;
	productA = NULL;
	delete productB;
	productB = NULL;
	delete factory1;
	factory1 = NULL;

	AbstractFactory *factory2 = new Factory2();
	AbstractProductA *productA2 = factory2->CreateProductA();
	AbstractProductB *productB2 = factory2->CreateProductB();
	productA2->Use();
	productB2->Eat();

	delete productA2;
	productA2 = NULL;
	delete productB2;
	productB2 = NULL;
	delete factory2;
	factory2 = NULL;

	return 0;
}



