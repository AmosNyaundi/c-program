QUESTION 3.


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int i, j;
	for (i=0; i<6; i++)
	{
	for (j=0; j<6; j++)
		{
			if(i==0||i==5)
			{
				cout<<"&"<<setw(2);
			}
			else if(i==j)
			{
				cout<<"&"<<setw(2);
			}
			else
			{
				cout<<"*"<<setw(2);
			}
		}
		cout<<"\n";
	}
	return 0;
}
