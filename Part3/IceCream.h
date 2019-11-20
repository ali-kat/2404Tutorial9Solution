#ifndef ICECREAM_H
#define ICECREAM_H

#include <iostream>
#include <string>

using namespace std;

class IceCream { // how to make this class abstract? 
	public:
		IceCream(){
			cout << this << endl; 
		}
		virtual ~IceCream(){ // why does this have to be virtual, make sure the students catch this! 
			cout << this << endl;
		}
		void prepare(){
			cout << "Preparing the " + nameOfFlavour + " ice cream!" << endl;
		}
		void serve(){
			cout << "Scooping out some " + nameOfFlavour + " ice cream!" << endl;
		} 
	protected:
		string nameOfFlavour; 
}; 

class Vanilla: public IceCream {
	public:
		Vanilla(){
			nameOfFlavour = "Simple Vanilla";
		}
}; 

class Chocolate: public IceCream {
	public:
		Chocolate(){
			nameOfFlavour = "Simple Chocolate";
		}
}; 

class Strawberry: public IceCream {
	public:
		Strawberry(){
			nameOfFlavour = "Simple Strawberry";
		}
}; 

class Neapolitan: public IceCream {
	public:
		Neapolitan(){
			nameOfFlavour = "Simple Neapolitan";
			vanilla = new Vanilla();
			chocolate = new Chocolate();
			strawberry = new Strawberry();
		}
		~Neapolitan(){
			delete vanilla;
			delete chocolate;
			delete strawberry;
		}
	private:
		Vanilla* vanilla; 
		Chocolate* chocolate;
		Strawberry* strawberry;
}; 

class DarkChocolateGelato: public IceCream {
	public:
		DarkChocolateGelato(){
			nameOfFlavour = "Dark Chocolate Gelato";
		}
};

class RaspberryGelato: public IceCream {
	public:
		RaspberryGelato(){
			nameOfFlavour = "Raspberry Gelato";
		}
};

class LemonGelato: public IceCream {
	public:
		LemonGelato(){
			nameOfFlavour = "Lemon Gelato";
		}
};

class OrangeGelato: public IceCream {
	public:
		OrangeGelato(){
			nameOfFlavour = "Orange Gelato";
		}
};

#endif