#include <iostream>
#include "Header.h"
using namespace std;

void pool::setlength(double l)
{
	length = l;
}

void pool::setwidth(double w)
{
	width = w;
}

void pool::setdepth(double d)
{
	depth = d;
}

void pool::setfillrate(double fr)
{
	fillrate = fr;
}

void pool::setdrainrate(double dr)
{
	drainrate = dr;
}



double pool::getlength()
{
	return length;
}

double pool::getwidth()
{
	return width;
}

double pool::getdepth()
{
	return depth;
}

double pool::getfillrate()
{
	return fillrate;
}

double pool::getdrainrate()
{
	return drainrate;
}

void pool::waterneed()
{
	totalwater = length*width*depth*7.5;
	waterneeded = totalwater / 2;
		cout << "You need " << totalwater << " Galons of water to fill the whole pool" << endl;
		cout << "You need " << waterneeded << " Galons of water to fill the half pool" << endl;

}

void pool::timeneed()
{
	double a = fillrate * 60;
	totaltime = totalwater / a;
	timeneeded = totaltime / 2;
	double b = drainrate * 60;
	drain = totalwater / b;
	cout << "IT will take " << totaltime << " hours to fill " << totalwater << " Galons of water of full pool" << endl;
	cout << "IT will take " << timeneeded << " hours to fill " << waterneeded << " Galons of water of partial(Half) pool " << endl;
	cout << "IT will take " << drain << " hours to empty " << totalwater << " Galons of water of full pool " << endl;
}