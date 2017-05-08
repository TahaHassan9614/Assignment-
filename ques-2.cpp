#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<time.h>
#include<math.h>
using namespace std;

float userInput();
float wind(float V,float T);

int main()
{
	cout<<"windchill factor is="<<userInput();
}

	float userInput()
	{
		float T,V;
		cout<<"Enter wind speed in miles per hour:";
		cin>>V;
		cout<<"Enter temperature in degrees Farenheit:";
		cin>>T;
		return wind(V,T);
	}
	
	float wind(float V,float T)
	{
		return (float)(35.74 + 0.6215 * T - 35.75 * pow(V,0.16) + 0.4275  *  T  *  pow(V,0.16) );
		 
	}
