// TASK 1 //
#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	pool p1;
	 p1.setlength(30);
	 p1.setwidth(60);
	 p1.setdepth(10);
	 p1.setfillrate(8);
	 p1.setdrainrate(6);

	 p1.waterneed();
	 p1.timeneed();
	system("pause");
}