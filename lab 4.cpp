#include<stdio.h>
struct person{
	char name[100];
	int age;
};
int main(){
	int i;
	struct person p[5];
	float b;
	for(i=0;i<5;i++){
		printf("Enter the name and age of %d person:\n",i+1);
		scanf("%s",&p[i].name);
		scanf("%d",&p[i].age);
	}
	for(i=0;i<5;i++)
	{
		if(p[i].age<=20){
			printf("the degree of membership of %s is 1.\n",p[i].name);
		}
		else if (p[i].age>20 && p[i].age<=30){
			b=(30-p[i].age)*0.1;
			printf("the degree of membership of %s is %0.2f.\n",p[i].name,b);
		}
		else{
			printf("the degree of membership of %s is 0.\n",p[i].name);
		}
	}
	return 0;
}
