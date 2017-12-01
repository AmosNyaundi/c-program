QUESTION 2.

#include<iostream>
#include<math.h>
#include<string>
#include<conio.h>

using namespace std;

double circle(double radius, double PI);
double triangle(double base, double height);
double rectangle(double width, double length);
 
int tries=0;

int main()
{	

	double PI=3.142;
	double radius,width,length,height,base;
	string figure;
	int remainedTrials;
	
		
	do {
		cout<<"Which of the figures below  do you want to find Area for?"<<endl;
		cout<<"\tCircle\n\tRectangle\n\tTriangle\n"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"Enter the name of the figure\n";
		cin>>figure;
	

	if(figure=="circle")
	{
		cout<<"Enter radius of the circle: \n"<<endl;
		cin>>radius;
		
		cout<<"The area of the circle is: "<<circle(radius,PI)<<endl;
	}
	else if(figure=="triangle")
	{
		cout<<"Enter the base of triangle\n"<<endl;
		cin>>base;
		cout<<"Enter the height of triangle\n"<<endl;
		cin>>height;
		cout<<"The area of triangle is: "<<triangle(base, height)<<endl;	
	
	}
	else if(figure=="rectangle")
	{
		cout<<"Enter the length of rectangle\n"<<endl;
		cin>>length;
		cout<<"Enter the width of rectangle\n"<<endl;
		cin>>width;
		cout<<"The area of rectangle is: "<<rectangle(width,length)<<endl<<endl;
	} 
	else 
	{
		tries++;
		remainedTrials=3-tries;	
		cout<<"Incorrect figure name. Your trials remain "<<remainedTrials<<endl<<endl;
		cout<<"------------------------------------------------------------"<<endl;
	}
	
}while(tries<3);

		return 0;
	
	
	
}

double circle(double radius, double PI)
	{
		return pow(radius,2)*PI;
	}

double triangle(double base, double height)
	{
		return 0.5*base*height;
	}
double rectangle(double width, double length)
	{
		return length*width;
	}
