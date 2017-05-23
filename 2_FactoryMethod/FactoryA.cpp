/*
 * FactoryA.cpp
 *
 *  Created on: May 23, 2017
 *      Author: ghosty
 */

#include "FactoryA.h"
#include "ProductA.h"

FactoryA::FactoryA()
{
	cout<<"FactoryA constructor"<<endl;
}

FactoryA::~FactoryA()
{
	cout<<"FactoryA destructor"<<endl;
}

Product * FactoryA::FactoryMethod()
{
	return new ProductA();
}
