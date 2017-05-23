/*
 * Product.h
 *
 *  Created on: May 22, 2017
 *      Author: ghosty
 */

#ifndef _1_SIMPLE_FACTORY_PRODUCT_H_
#define _1_SIMPLE_FACTORY_PRODUCT_H_

#include <iostream>
using namespace std;

class Product
{
public:
	Product();
	virtual ~Product();
	virtual void Use();
};

#endif /* _1_SIMPLE_FACTORY_PRODUCT_H_ */
