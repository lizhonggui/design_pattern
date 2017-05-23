/*
 * ProductA.h
 *
 *  Created on: May 22, 2017
 *      Author: ghosty
 */

#ifndef _1_SIMPLE_FACTORY_PRODUCTA_H_
#define _1_SIMPLE_FACTORY_PRODUCTA_H_

#include "Product.h"

class ProductA : public Product
{
public:
	ProductA();
	virtual ~ProductA();
	void Use();
};



#endif /* _1_SIMPLE_FACTORY_PRODUCTA_H_ */
