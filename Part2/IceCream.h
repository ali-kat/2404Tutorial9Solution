#ifndef ICECREAM_H
#define ICECREAM_H

#include <iostream>
#include <string>

using namespace std;

class IceCream { 
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

#endif