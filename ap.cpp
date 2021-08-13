#include<iostream>
using namespace std;
int main()
{
	int num[5];
	int *a;
	a=&num[0];
	
	cout<<"Enter the element:\n";
	for(int i=0;i<5;i++)
	{
	
		cin>>num[i];
	}
	cout<<"\n Your elements are:\n";
	for(int i=0;i<5;i++)
	{
		cout<<*a<<"\t";
		*a++;
	}
	return 0;
}
