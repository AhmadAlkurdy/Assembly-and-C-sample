/////////////////////////////////////////////////////////////////////////////////////
/////// Name : Ahmad Alkurdy
//////  Class: Assembly language 
/////   Date : 5/3/2016
////    Purpose:The volume of a circular cone with height h and base radius r is 
///////// given by πr2h/3. Write a console32 or console64 program that starts with REAL4 values for
/////////r and h in the data segment, calculates volume of the corresponding cone, and stores it at coneVol
/////////in the data segment. You will have the answer in ST before saving it at coneVol. Use the 
/////////debugger at that point to check your calculations.


#include <iostream>
using namespace std;

int main()
{
	float h = 0;
	float r = 0;
	float result = 0;
	float three = 3;
	//prompting the user for the height and the radius to do the calculation in assembly
	cout << "Enter the height of the circular cone so I can calculate its volume: " << endl;
	cin >> h;
	cout << "Enter the radius: " << endl;
	cin >> r;
	//the start of the assembly piece
	_asm
	{
		
		finit       ; clean the stack
		fldpi       ;loading pi
        fmul    h   ;h*pi in st
		fmul    r   ;h*pi*r
		fmul    r   ; h*pi*r*r
		fdiv    three ; h*pi*r*r/3
		fstp    result ;store the result in the memore and pop the stack
	}
	cout << "The result is : " << result << endl;
	system("pause");
	return 0;

}