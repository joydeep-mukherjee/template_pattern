//this program implements the template pattern
//this program has no hooks
/*

#include<iostream>
using namespace std;

class hotBeverage
{
	void boilwater()
	{
		cout<<"Water has boiled"<<endl;
	}
	virtual void brew()=0;
	void pourInCup()
	{
		cout<<"Pour water in cup"<<endl;
	}
	virtual void addCondiments()=0;

public:
	//the algorithm steps are defined below
	void prepareBeverage()
	{
		boilwater();
		brew();
		pourInCup();
		addCondiments();
	}
};

//tea_beverage extends abstract class hotBeverage and defines virtual methods
class tea_beverage: public hotBeverage
{
public:
	void brew()
	{
		cout<<"Steeping tea"<<endl;
	}
	void addCondiments()
	{
		cout<<"Adding lemon and honey"<<endl;
	}
};

//coffee_beverage extends abstract class hotBeverage and defines virtual methods
class coffee_beverage: public hotBeverage
{
public:
	void brew()
	{
		cout<<"Brewing using coffee filter"<<endl;
	}
	void addCondiments()
	{
		cout<<"Adding milk and sugar"<<endl;
	}
};

int main()
{
	coffee_beverage coffee;
	tea_beverage tea;
	cout<<"Making tea:"<<endl;
	cout<<"---------------------------"<<endl;
	tea.prepareBeverage(); //call the method in which the algorithm is encapsulated
	cout<<endl<<endl;
	cout<<"Making Coffee:"<<endl;
	cout<<"---------------------------"<<endl;
	coffee.prepareBeverage(); //call the method in which the algorithm is encapsulated
}
*/
