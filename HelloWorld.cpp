#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	
//	string first;
//	cout << "Enter Name:"<<endl;

// Shapes

int width 	= 10;
int height 	= 10;

	for ( int i = 0; i < height; i++)
	{

			for(int x = 0; x <=width;x++)
			{
				cout << "*";
			}
			cout<<"\t";
			for(int y = 0; y< width - 1 - i;y++)
			{
				cout<<" ";
			}
			for(int y = 0; y < (i*2)+1;y++)
			{
				cout<<"*";
			}
			for(int y = 0; y< width - 1 - i;y++)
			{
				cout<<" ";
			}
			cout<<"\t";
			for(int x = 0; x <=width;x++)
			{
				cout << "*";
			}
			cout<<endl;
	}

	cout<< endl;
	
}
