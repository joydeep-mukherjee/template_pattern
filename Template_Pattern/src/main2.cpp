//this program implements the template pattern
//this program implements the idea of hooks in the abstract class

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
	//the method below is also referred to as a hook
	//it can be used to control the flow of the algorithm
	virtual bool wantCondiments()=0;
public:
	//the algorithm steps are defined below
	void prepareBeverage()
	{
		boilwater();
		brew();
		pourInCup();
		if (wantCondiments()==true)
		{
			addCondiments();
		}
	}
};

class tea_beverage: public hotBeverage
{
	char ch;
public:
	void brew()
	{
		cout<<"Steeping tea"<<endl;
	}
	void addCondiments()
	{
		cout<<"Adding lemon and honey"<<endl;
	}
	//define the hook in the subclasses
	bool wantCondiments()
	{
		cout<<"Do you want lemon and honey (Y or N)? ";
				cin>>ch;
		if ((ch=='Y') || (ch =='y'))
			return true;
		else
			return false;
	}
};

class coffee_beverage: public hotBeverage
{
	char ch;
public:
	void brew()
	{
		cout<<"Brewing using coffee filter"<<endl;
	}
	void addCondiments()
	{
		cout<<"Adding milk and sugar"<<endl;
	}
	//define the hook in the subclasses
	bool wantCondiments()
	{
		cout<<"Do you want milk and sugar (Y or N)? ";
				cin>>ch;
		if ((ch=='Y') || (ch =='y'))
			return true;
		else
			return false;
	}
};

int main()
{
	coffee_beverage coffee;
	tea_beverage tea;


	cout<<"Making tea:"<<endl;
	cout<<"---------------------------"<<endl;
	tea.prepareBeverage();

	cout<<endl<<endl;

	cout<<"Making Coffee:"<<endl;
	cout<<"---------------------------"<<endl;
	coffee.prepareBeverage();
}
