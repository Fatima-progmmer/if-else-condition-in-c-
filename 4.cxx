#include<iostream>
using namespace std;
int  main()
{
	char name,answer,a,b,c,d,yes='y';
	cout <<"Do you have a crush?\n";
	cin >> answer;
	if(answer == yes)
	{
	cout <<"What's your crush name\n";
	cin >> name;
	cout <<" You should tell him";
	}
	else
	cout <<"Boring person";
	return 0;
}
