#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<time.h>
#include<math.h>
using namespace std;
int main()
{
	float num,a,b,c,setpro,ran;
	int mod;
	
	cout<<"Enter Number = ";//a
	cin>>num;	//b
	
	cout<<"The number you enter is = "<<num<<endl; //c) Reanding number
	cout<<"\n";
	
	srand(time(NULL));
	
	ran=rand()%34+3;	//d) Random number between 3 to 37
	
	cout<<"The Random number is = "<<ran<<endl;   // e) Displayng random number
	
	cout<<"\n"<<endl;
	
	setpro=num*ran;
	cout<<"The product of num & Random number is = "<<setpro<<endl;	// f) Setproduct of random number*num
	
	cout<<"\n"<<endl;
	
	
	cout<<"The ceiling of product is = "<<ceil(setpro)<<endl;  // g) Ceiling of product
	
	cout<<"\n"<<endl;
	
	
	 a=pow(num,5);					// h) Raised to power 5
	cout<<"After raised to power 5 = "<<a<<endl;
	
	cout<<"\n"<<endl;
	
	
	cout<<"Floor of random num = "<<floor(setpro)<<endl;    // i) Floor of random number
	
	cout<<"\n"<<endl;
	
	mod=((int)floor(setpro)%(int)num);
	cout<<"number raised to power of modulus ="<<pow(num,mod)<<endl;
	cout<<"\n"<<endl;			// j) display number raised to power of modulus above 
	
	
	 c=sqrt(ran);
	 cout<<"After square root = "<<c<<endl;	// k) Square root of random number
}
