#include<iostream>
using namespace std;

class Matrix
{
        int a[3][3];
    public:
        void accept();
        void display();
        void operator +(Matrix x);
};
