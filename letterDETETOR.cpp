#include <iostream>
using namespace std;
int main()
{
	char abcstring[100];
	cout<<"Enter the string: ";
	cin.getline(abcstring,100);
		int letterCounter=0;
		int otherletters=0;
		int totalletters=0;
	for(int i=0; abcstring[i] !='\0'; i++)
	{
		char letter = abcstring[i];
		// cout<<"The total letters in string are: "<<abcstring[i]<<endl;
		if( letter == 'a' )
		{
			letterCounter++ ;
		}
		else
		{
			otherletters++;
		}
	}
	cout<<"The number of letter 'a' in a string is: "<<letterCounter<<endl;
	cout<<"The number of other letters in string are: "<<otherletters<<endl;
}