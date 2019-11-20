#ifndef FACTORY_H
#define FACTORY_H

#include <iostream>
#include <string>
#include "IceCream.h"

class Factory {
	public:
		virtual ~Factory() {}
		virtual IceCream * createInstance(int selection) = 0;
};

class IceCreamFactory: public Factory {
	public:
		//~IceCreamFactory() {}
		IceCream * createInstance(int selection){
			if (selection == 1) {
				return new Vanilla(); 
			}else if (selection == 2) {
				return new Chocolate(); 
			}else if (selection == 3) {
				return new Strawberry();  
			}else if (selection == 4) {
				return new Neapolitan(); 
			}
			return nullptr; // this should not happen!
		}
};

class GelatoFactory: public Factory {
	public: 
		//~GelatoFactory() {}
		IceCream * createInstance(int selection){
			if (selection == 1) {
				return new DarkChocolateGelato(); 
			}else if (selection == 2) {
				return new RaspberryGelato(); 
			}else if (selection == 3) {
				return new LemonGelato();  
			}else if (selection == 4) {
				return new OrangeGelato(); 
			}
			return nullptr; // this should not happen!
		}
};

#endif