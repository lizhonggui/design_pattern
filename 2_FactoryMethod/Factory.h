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
	virtual Product * FactoryMethod() = 0;
};



#endif /* _1_SIMPLE_FACTORY_FACTORY_H_ */
