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
