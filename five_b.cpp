#include<iostream>

using namespace std;

class Shape
{
    public:
    int side1, side2;
    Shape(int a, int b)
    {
        side1=a;
        side2=b;
    }

    void choice()
    {
        int n;
        cout<<"ENTER 1 FOR SQUARE\nENTER 2 FOR RECTANGLE\nENTER 3 FOR TRIANGLE"<<endl;
        cin>>n;

        switch(n)
        {
            case 1: cout<<"Area of Square is : "<<calculate(side1)<<endl;
                    break;

            case 2: cout<<"Area of Rectangle is : "<<calculate(side1, side2)<<endl;
                    break;

            case 3: cout<<"Area of Triangle  is : "<<calculate((float)side1, (float)side2)<<endl;
                    break;
            default: cout<<"WRONG CHOICE"<<endl;
        }
    }

    int calculate(int side)
    {
        return side*side;
    }

    int calculate(int base, int length)
    {
        return base*length;
    }

    float calculate(float base, float height)
    {
        return 0.5*base*height;
    }
};
int main()
{
    int s1,s2;
    cout<<"ENTER SIDE 1 : ";
    cin>>s1;
    cout<<"\nENTER SIDE 2 : ";
    cin>>s2;
    cout<<"\n";
    Shape obj(s1,s2);
    obj.choice();
}

