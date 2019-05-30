#include<iostream>
using namespace std;
class Temperature
{
	public:
		float f,c;
		Temperature(float t)
		{
			cout<<"Enter Temperature in Celcius"<<endl;
			cin>>c;
			calculate();
		}
		void calculate()
		{
			f=((c*9)/5)+32;
			cout<<"Temperature in Fahrenheit: "<<f<<endl;
		}
};
class Temp: public Temperature
{
	public:
		float k;
		Temp(float a) :Temperature(a){}
		void calculate()
		{
			k=(((f-32)*5)/9)+273.15;
			cout<<"Temperature in Kelvin: "<<k<<endl;
		}
};

