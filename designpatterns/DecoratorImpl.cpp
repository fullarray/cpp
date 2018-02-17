#include <string>
#include <iostream>

class Car{
	protected:
		string _str;
	public:
		Car(){
			_str = "Unknown Car";
		}
		
		virtual string getDescription(){
			return _str;
		}
		
		virtual double getCost() = 0;
		
		virtual ~Car(){
			cout << "~Car()\n";
		}
};

class OptionsDecorator : public Car {
	public:
		virtual string getDescription() = 0;
		
		virtual ~OptionsDecorator(){
			cout << "~OptionsDecorator()\n";
		}
};

class CarModel : public Car{
	public:
		CarModelOne(){
			_str = "CarModel";
		}
		
		virtual double getCost(){
			return 23002.24;
		}
		
		~CarModelOne(){
			cout << "~CarModelOne()\n";
		}
};

class Navigation: public OptionsDecorator{
		Car *_b;
	public:
		Navigation(Car *b){
			_b = b;
		}
		string getDescription(){
			return _b->getDescription() + ", Navigation";
		}
		
		double getCost(){
			return 400.45 + _b->getCost();
		}
		
		~Navigation(){
			cout << "~Navigation()\n";
			delete _b;
		}
};

class PremiumSoundSystem: public OptionsDecorator{
		Car *_b;
	
	public:
		PremiumSoundSystem(Car *b){
			_b = b;
		}
		
		string getDescription(){
			return _b->getDescription() + ", PremiumSoundSystem";
		}
		
		double getCost(){
			return 0.44 + _b->getCost();
		}
		
		~PremiumSoundSystem(){
			cout << "~PremiumSoundSystem()\n";
			delete _b;
		}
};

class ManualTransmission: public OptionsDecorator{
		Car *_b;
	public:
		ManualTransmission(Car *b){
			_b = b;
		}
		
		string getDescription(){
			return _b->getDescription() + ", ManualTransmission.";
		}
		
		double getCost(){
			return 0.34 + _b->getCost();
		}
		
		~ManualTransmission(){
			cout << "~ManualTransmission()\n";
			delete _b;
		}
};

int main(){
	Car *b = new CarModelOne();
	
	cout << "Base model of " << b->getDescription() << " costs $" << b->getCost() << "\n";
	
	b = new Navigation(b);
	cout << b->getDescription() << " will cost you $" << b->getCost() << "\n";
	b = new PremiumSoundSystem(b);
	b = new ManualTransmission(b);
	cout << b->getDescription() << " will cost you $" << b->getCost() << "\n";
	
	delete b;
	
	return 0;
}