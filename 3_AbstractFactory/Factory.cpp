/*
 * Factory.cpp
 *
 *  Created on: May 22, 2017
 *      Author: ghosty
 */

#include "Product.h"
#include "Factory.h"


AbstractFactory::AbstractFactory()
{
	cout<<"AbstractFactory constructor"<<endl;
}

AbstractFactory::~AbstractFactory()
{
	cout<<"AbstractFactory destructor"<<endl;
}

Factory1::Factory1()
{
	cout<<"Factory1 constructor"<<endl;
}

Factory1::~Factory1()
{
	cout<<"Factory1 destructor"<<endl;
}

AbstractProductA * Factory1::CreateProductA()
{
	return new ProductA1();
}

AbstractProductB * Factory1::CreateProductB()
{
	return new ProductB1();
}

Factory2::Factory2()
{
	cout<<"Factory2 constructor"<<endl;
}

Factory2::~Factory2()
{
	cout<<"Factory2 destructor"<<endl;
}

AbstractProductA * Factory2::CreateProductA()
{
	return new ProductA2();
}

AbstractProductB * Factory2::CreateProductB()
{
	return new ProductB2();
}
