#include <stdio.h>
#include "divide.h"
#include "f.h"
int main()
{
	double x1,x2,x;
	do
	{
		scanf("%lf%lf",&x1,&x2);
	printf("x1=%f,x2=%f\n",x1,x2);
		if(f(x1)*f(x2)>0)
			printf("请重新输入");
	}while(f(x1)*f(x2)>0);	
	x=divide(x1,x2);
	printf("方程的根为%f\n",x);
	return 0;
}
