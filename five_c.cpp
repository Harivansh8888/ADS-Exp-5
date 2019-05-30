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
void Matrix::accept()
{
        cout<<"\n Enter Matrix Element (3 X 3) : \n";
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cout<<" ";
                        cin>>a[i][j];
                }
        }
}
void Matrix::display()
{
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<a[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
