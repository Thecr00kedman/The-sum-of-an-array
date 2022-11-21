#include<iostream>
using namespace std;

int b[5];
int i;
int sum = 0;


int total( )
{
	int sum=0;

	
	

	for (i = 0; i < 5; i++)

	{

		sum = sum + b[i];
	
	}
	cout << sum << endl;
	return sum;

}

int main()
{
	  

     
	
		cout << "enter the element of an array" <<endl;
		for (i = 0; i < 5; i++)
		{
			cin >> b[i]; 
			
			

		}


		int result = total();
		;
		return 0;



	
}