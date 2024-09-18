//Program 2: Write a program to calculate the product of the digit of the number.

//Program:
#include<iostream>
using namespace std;
int main()
{
	int n, rem, p=1;
	cout<<"Enter a number:";
	cin>>n;
	while (n>0)
	{
		rem = n % 10;
		p = p*rem;
		n = n/10;
		
	}
	cout<<"sum is ="<<p<<endl;
	return 0;
}
