#include <iostream>
using namespace std;

string name = "ahmed";
float money = 99.9;
 void show();
 void minu( int a);

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
	int m;
	cout<<"choose \n1 to deposit\n2 to withdrawl\n3 to show balance\n";
	cin>>m;
	minu(m);
	return 0;
}
void show(){
	cout<<"your account name is :"<<name<<endl;
		cout<<"you have( "<<money<<" ) in your account"<<endl;
	
}
void minu( int a){
	if (a == 1)
	deposit();
	else if(a ==2)
	withdrawl();
	else
	show();
}
