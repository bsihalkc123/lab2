#include<stdio.h>
int biaddition(int a,int b)
{
	int c;
	while(b!=0)
	{
		c=(a&b)<<1;
		a=a^b;
		b=c;
	}
	return a;
}
int bisubtraction(int a,int b)
{
	int carry;
	b=biaddition(~b,1);
	while(b!=0)
	{
		carry=(a&b)<<1;
		a=a^b;
		b=carry;
	}
	return a;
}
int bimultiplication(int a,int b)
{
	int i,res=0;
	for(i=0;i<b;i++)
	{
		res=
		biaddition(res,a);
	}
	return res;
}
int bidivision(int a,int b)
{
	int i,res,count=0,twoscomplement;
	if(a<b)
	{
		printf("division of %d and %d is %d\n",a,b,0);
	
		return 0;	
}
res=a;
twoscomplement=biaddition(~b,1);
for(i=0;res>0;i++){
res=biaddition(res,twoscomplement);
if(res<=0)
{
	if(res==0)
	count=biaddition(count,1);
	break;
}
else{
	count=biaddition(count,1);
}
}
return count;
}
int main()
{
	int x,y,biadd,bisub,bimul,bidiv;
	printf("enter fist integer:");
	scanf("%d",&x);
	printf("Enter second integer:");
	scanf("%d",&y);
	biadd=biaddition(x,y);
	bisub=bisubtraction(x,y);
	bimul=bimultiplication(x,y);
	bidiv=bidivision(x,y);
	printf("binary addition:%d\n",biadd);
	printf("bianry subtraction:%d\n",bisub);
	printf("binary multiplication:%d\n",bimul);
	printf("binary division:%d\n",bidiv);
	return 0;
}
