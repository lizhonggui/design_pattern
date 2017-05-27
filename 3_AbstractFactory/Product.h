/*
 * Product.h
 *
 *  Created on: May 22, 2017
 *      Author: ghosty
 */

#ifndef _3_ABSTRACT_FACTORY_PRODUCT_H_
#define _3_ABSTRACT_FACTORY_PRODUCT_H_

#include <iostream>
using namespace std;

class AbstractProductA
{
public:
	AbstractProductA();
	virtual ~AbstractProductA();
	virtual void Use() = 0;
};

class ProductA1 : public AbstractProductA
{
public:
	ProductA1();
	virtual ~ProductA1();
	virtual void Use();
};

class ProductA2 : public AbstractProductA
{
public:
	ProductA2();
	virtual ~ProductA2();
	virtual void Use();
};

class AbstractProductB
{
public:
	AbstractProductB();
	virtual ~AbstractProductB();
	virtual void Eat() = 0;
};

class ProductB1 : public AbstractProductB
{
public:
	ProductB1();
	virtual ~ProductB1();
	virtual void Eat();
};

class ProductB2 : public AbstractProductB
{
public:
	ProductB2();
	virtual ~ProductB2();
	virtual void Eat();
};

#endif /* _3_ABSTRACT_FACTORY_PRODUCT_H_ */
