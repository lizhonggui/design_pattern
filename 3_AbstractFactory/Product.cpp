/*
 * Product.cpp
 *
 *  Created on: May 22, 2017
 *      Author: ghosty
 */
#include "Product.h"

AbstractProductA::AbstractProductA()
{
	cout<<"AbstractProductA constructor"<<endl;
}

AbstractProductA::~AbstractProductA()
{
	cout<<"AbstractProductA deconstrucor"<<endl;
}

ProductA1::ProductA1()
{
	cout<<"ProductA1 constructor"<<endl;
}

ProductA1::~ProductA1()
{
	cout<<"ProductA1 deconstrucor"<<endl;
}

void ProductA1::Use()
{
	cout<<"ProductA1 use"<<endl;
}

ProductA2::ProductA2()
{
	cout<<"ProductA2 constructor"<<endl;
}

ProductA2::~ProductA2()
{
	cout<<"ProductA2 deconstrucor"<<endl;
}

void ProductA2::Use()
{
	cout<<"ProductA2 use"<<endl;
}

AbstractProductB::AbstractProductB()
{
	cout<<"AbstractProductB constructor"<<endl;
}

AbstractProductB::~AbstractProductB()
{
	cout<<"AbstractProductB deconstrucor"<<endl;
}

ProductB1::ProductB1()
{
	cout<<"ProductB1 constructor"<<endl;
}

ProductB1::~ProductB1()
{
	cout<<"ProductB1 deconstrucor"<<endl;
}

void ProductB1::Eat()
{
	cout<<"ProductB1 eat"<<endl;
}

ProductB2::ProductB2()
{
	cout<<"ProductA2 constructor"<<endl;
}

ProductB2::~ProductB2()
{
	cout<<"ProductA2 deconstrucor"<<endl;
}

void ProductB2::Eat()
{
	cout<<"ProductB2 eat"<<endl;
}
