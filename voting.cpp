#include<iostream>
using namespace std;
int main()
{
	int age;
	
	cout<<"Enter the age of the user:";
	cin>>age;
	
	if(age>=18)
	{
		cout<<"\n You are eligible for voting";
	}
	else
	{
		cout<<"\n You are not eligible for voting";
	}
	return 0;
}
