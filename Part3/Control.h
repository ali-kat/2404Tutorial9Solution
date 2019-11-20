#ifndef CONTROL_H
#define CONTROL_H

#include <string>
#include <iostream>
#include <vector>
#include "View.h"
#include "IceCream.h"
#include "Factory.h"

using namespace std;

class Control {
	public:
		~Control();
		void run(); 
	private: 
		View view;
		Factory * factory;
		IceCream * scoop;
		vector<IceCream *> cone;
};

#endif