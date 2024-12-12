#include <iostream>
using namespace std;

class Animal
{
private:

	string name;
	string species; 
	string continent;
	double kilogram; 

public:

	Animal() {}
	Animal(string nm, string sp, string cont, double kg)
	{
		name = nm;
		species = sp;
		continent = cont;
		kilogram = kg;
	}
	void Input()
	{
		cout << "Input name of the animal: " << endl;
		cin >> name;
		cout << "Input species of the animal: " << endl;
		cin >> species;
		cout << "Input continent where live the animal: " << endl;
		cin >> continent;
		cout << "Input weight of the animal: " << endl;
		cin >> kilogram;
	}
	void Print()
	{
		cout << name << species << continent << kilogram << endl;
	}
	virtual void Eat()
	{
		cout << "Unknown food for animal\n";
	}
	virtual void Sound()
	{
		cout << "Unknown sound of animal\n";
	}
};

class Parrot :public Animal
{
public:
	Parrot() {};
	Parrot(string nm, string sp, string cont, double kg) :Animal(nm, sp, cont, kg) {};
	void Eat()
	{
		cout << "Fruits, vegetables, berries, herbs, cereals!" << endl;
	}
	void Sound()
	{
		cout << "Squeaks, squeals, whistles and can also talk! :)" << endl;
		cout << endl;
	}
};

class Elephant :public Animal
{
public:
	Elephant() {}
	Elephant(string nm, string sp, string cont, double kg) :Animal(nm, sp, cont, kg) {}

	
	void Eat()
	{
		cout << "Elephants are herbivores!" << endl;
	}
	void Sound()
	{
		cout << "Can be heard at the zoo! :)" << endl;
		cout << endl;
	}
};

class Dog :public Animal
{
public:
	Dog() {}
	Dog(string nm, string sp, string cont, double kg) :Animal(nm, sp, cont, kg) {}

	void Eat()
	{
		cout << "Beef, turkey, chicken, fish!" << endl;
	}
	void Sound()
	{
		cout << "Woof!" << endl;
		cout << endl;
	}
};

class Cat :public Animal
{
public:
	Cat() {}
	Cat(string nm, string sp, string cont, double kg) :Animal(nm, sp, cont, kg) {}

	void Eat()
	{
		cout << "Meat, fish, cereals, dairy products!" << endl;
	}
	void Sound()
	{
		cout << "Meow!" << endl;
		cout << endl;
	}
};

int main()
{
	int selection;
	Animal* animal;
	cout << "Select Animal: 1 - Parrot, 2 - Elephant, 3 - Dog, 4 - Cat " << endl;
	cin >> selection;
	switch (selection)
	{
	case(1):
		animal = new Parrot("Ara\t", "Parrot\t", "South and central Africa\t", 1.5);
		break;
	case(2):
		animal = new Elephant("African\t", "Elephant\t", "Asia\t", 5000);
		break;
	case(3):
		animal = new Dog("Great Dane\t", "Dog\t", "Germany\t", 80);
		break;
	case(4):
		animal = new Cat("British Nensi\t", "Cat\t", "United Kingdom\t", 8);
		break;
	}
	animal->Print();
	animal->Eat();
	animal->Sound();



}