/*
 * Factory.cpp
 *
 *  Created on: May 22, 2017
 *      Author: ghosty
 */


#include "Factory.h"
#include "ProductA.h"
#include "ProductB.h"

Factory::Factory()
{
	cout<<"Factory constructor"<<endl;
}

Factory::~Factory()
{
	cout<<"Factory deconstructor"<<endl;
}


Product * Factory::CreateProduct(string mProductName)
{
	if("A" == mProductName)
	{
		return new ProductA();
	}
	else if("B" == mProductName)
	{
		return new ProductB();
	}
	return NULL;
}
