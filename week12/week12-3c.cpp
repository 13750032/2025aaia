//week12-3c.cpp
//SOIT108_Base_011
#include <stdio.h>
int main(){
	int a,b,c,d,q,z;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	q=c-a;
	z=d-b;
	if(q*z>0)printf("%d",q*z);
	if(q*z<0)printf("%d",q*z*(-1));
}
