#include "Control.h"

using namespace std;

Control::~Control() {
	delete factory;
	for(auto & ele : cone) {
		delete ele; 
	}
}

void Control::run(){
	view.printMessage("Ice Cream Shoppe \n Version 0.1 alpha \n This code is for a valgrind and memory management demo.");
	
	int selection; 

	factory = new IceCreamFactory();

	while(1){
		view.printMenu();
		selection = view.getSelection();
		if (selection == 0) {
			break; 
		} else {
			scoop = factory->createInstance(selection);
			scoop->prepare();
			scoop->serve();  
			cone.push_back(scoop);
		} 
	}
}