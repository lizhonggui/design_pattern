/*
 * Factory.h
 *
 *  Created on: May 22, 2017
 *      Author: ghosty
 */

#ifndef _1_SIMPLE_FACTORY_FACTORY_H_
#define _1_SIMPLE_FACTORY_FACTORY_H_

#include "Product.h"

class Factory
{
public:
	Factory();
	virtual ~Factory();
	Product * CreateProduct(string mProductName);
};



#endif /* _1_SIMPLE_FACTORY_FACTORY_H_ */
