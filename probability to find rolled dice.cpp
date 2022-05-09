#include<iostream>
using namespace std;
int dice,dice2,sample_space=1,base=6;float result;
int main()
{
	cout<<"\n PROBABILITY TO FIND ROLLED DICE  "<<endl;
	cout<<"\n-----------------------------------"<<endl;
	cout<<"\nENTER HOW MANY DICE YOU WANT TO ROLL : ";
	cin>>dice;
	dice2=dice;
	while(dice!= 0)
	{
	    sample_space=sample_space*base;
		dice--;	
	}
	result=float(dice2)/sample_space;
	cout<<"\nThe Sample Space Is : "<<sample_space<<endl;
	cout<<"\nThe Probability Is : "<<result<<endl;
	return 0;
}
