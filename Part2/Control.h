#ifndef CONTROL_H
#define CONTROL_H

#include <string>
#include <iostream>
#include <vector>
#include "View.h"
#include "IceCream.h"

using namespace std;

class Control {
	public:
		~Control();
		void run(); 
	private: 
		IceCream * createInstance(int i);
		View view;
		IceCream * scoop;
		vector<IceCream *> cone;
};

#endif