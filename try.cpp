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
	void minu( int a);
	 show();
	return 0;
}
void show(){
	cout<<"your account name is :"<<name<<endl;
		cout<<"you have( "<<money<<" ) in your account"<<endl;
	
}
void minu( int a){
	cout<<"Choose the thing you need :"<<endl;
	cout<<" 1- to deposit monet\n 2- to take money\n 3- to show your accounts"<<endl;
	cin>>a;
}
