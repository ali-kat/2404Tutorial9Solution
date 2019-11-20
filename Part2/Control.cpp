#include "Control.h"

using namespace std;

Control::~Control() {
	for(auto & ele : cone) {
		//cout << *ele << endl;
		delete ele; 
	}
}

void Control::run(){
	int selection; 
	view.printMessage("Ice Cream Shoppe \n Version 0.1 alpha \n This code is for a valgrind and memory management demo.");
	while(1){
		view.printMenu();
		selection = view.getSelection();
		if (selection == 0) {
			break; 
		} else {
			scoop = createInstance(selection);
			scoop->prepare();
			scoop->serve(); 
			cone.push_back(scoop);
		} 
	}
}

IceCream * Control::createInstance(int selection){
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