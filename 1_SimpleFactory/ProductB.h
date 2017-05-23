/*
 * ProductB.h
 *
 *  Created on: May 22, 2017
 *      Author: ghosty
 */

#ifndef _1_SIMPLE_FACTORY_PRODUCTB_H_
#define _1_SIMPLE_FACTORY_PRODUCTB_H_

#include "Product.h"

class ProductB : public Product
{
public:
	ProductB();
	virtual ~ProductB();
	void Use();
};


#endif /* _1_SIMPLE_FACTORY_PRODUCTB_H_ */
