/*
 * Factory.h
 *
 *  Created on: May 22, 2017
 *      Author: ghosty
 */

#ifndef _3_ABSTRACT_FACTORY_FACTORY_H_
#define _3_ABSTRACT_FACTORY_FACTORY_H_

#include "Product.h"

class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();
	virtual AbstractProductA * CreateProductA() = 0;
	virtual AbstractProductB * CreateProductB() = 0;
};

class Factory1 : public AbstractFactory
{
public:
	Factory1();
	virtual ~Factory1();
	virtual AbstractProductA * CreateProductA();
	virtual AbstractProductB * CreateProductB();
};

class Factory2 : public AbstractFactory
{
public:
	Factory2();
	virtual ~Factory2();
	virtual AbstractProductA * CreateProductA();
	virtual AbstractProductB * CreateProductB();
};

#endif /* _3_ABSTRACT_FACTORY_FACTORY_H_ */
