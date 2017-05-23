/*
 * main.cpp
 *
 *  Created on: May 22, 2017
 *      Author: ghosty
 */

#include "Factory.h"
#include "ProductA.h"
#include "ProductB.h"


void SimpleFactory()
{
	Factory *factory = new Factory();
	Product * product = factory->CreateProduct("A");
	product->Use();
	delete product;
	product = NULL;

	product = factory->CreateProduct("B");
	product->Use();
	delete product;
	product = NULL;

	delete factory;
	factory = NULL;
}


int main()
{
	SimpleFactory();
	return 0;
}


