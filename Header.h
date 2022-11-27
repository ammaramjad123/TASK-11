class pool{
private :
	double length;
	double width;
	double depth;
	double fillrate;
	double drainrate;
	double totalwater;
	double totaltime;
	double waterneeded;
	double timeneeded;
	double drain;

     public :
		 void setlength(double);
		 void setwidth(double);
		 void setdepth(double);
		 void setfillrate(double);
		 void setdrainrate(double);

		double  getlength();
		double  getwidth();
		double getdepth();
		double getfillrate();
		double getdrainrate();

		 void waterneed();
		 void timeneed();

};