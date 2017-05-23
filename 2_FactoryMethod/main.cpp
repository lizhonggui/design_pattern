/*
 * main.cpp
 *
 *  Created on: May 23, 2017
 *      Author: ghosty
 */


#include "FactoryA.h"
#include "ProductA.h"

int main()
{
	Factory * factory = new FactoryA();
	Product * product = factory->FactoryMethod();
	product->Use();
	delete product;
	product = NULL;

	delete factory;
	factory = NULL;

	return 0;
}
