#include "f.h"
double divide(double x1,double x2)
{	
	double x0=(x1+x2)/2;

	while(f(x0)>1e-5 || f(x0)<-1e-5)
	{
		if(f(x1)*f(x0)<=0)
			x2=x0;
		if(f(x2)*f(x0)<=0)
			x1=x0;
		x0=(x1+x2)/2;
	}
	if(f(x0)<=1e-5 && f(x0)>=-1e-5) //当精度1e-5结束
		return x0;

}
