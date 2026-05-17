#include <iostream>
using namespace std;

string name = "ahmed";
float money = 99.9;

int withdrawl(){
	
	int y;
	cout<<"hi "<<name<<" enter your withdrawl "<<endl;
	cin>>y;
	if(y >= money)
	cout<<"ok"<<endl;
	else
	cout<<"no"<<endl;
}



int deposit()
{
	int x;
	cout<<"hi "<<name<<" enter your deposit : ";
	cin>>x;
	money += x;
	cout<<"your money is : "<<money<<endl;
}

int main()
{
	
	return 0;
}