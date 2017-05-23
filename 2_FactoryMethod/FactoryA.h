/*
 * FactoryA.h
 *
 *  Created on: May 23, 2017
 *      Author: ghosty
 */

#ifndef _2_FACTORYMETHOD_FACTORYA_H_
#define _2_FACTORYMETHOD_FACTORYA_H_

#include "Factory.h"

class FactoryA : public Factory
{
public:
	FactoryA();
	virtual ~FactoryA();
	Product * FactoryMethod();
};



#endif /* 2_FACTORYMETHOD_FACTORYA_H_ */
