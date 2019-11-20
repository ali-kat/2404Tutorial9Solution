#include "Control.h"

using namespace std;

Control::~Control() {
	for(auto & ele : cone)
		delete ele; 
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
			if (selection == 1) {
				scoop = new Vanilla();
				scoop->prepare();
				scoop->serve(); 
				cone.push_back(scoop); 
			}else if (selection == 2) {
				scoop = new Chocolate();
				scoop->prepare();
				scoop->serve(); 
				cone.push_back(scoop); 
			}else if (selection == 3) {
				scoop = new Strawberry();
				scoop->prepare();
				scoop->serve(); 
				cone.push_back(scoop); 
			}else if (selection == 4) {
				scoop = new Neapolitan();
				scoop->prepare();
				scoop->serve(); 
				cone.push_back(scoop); 
			}
		} 
	}
}