#include <stdio.h>
int yue(int x);
int tian(int n);
int main()
{int n,a,b,c,d,e,f,g ,s;
e=0;g=0;s=0;
scanf("%d-%d-%d",&a,&b,&c);
for(d=1899;d<a;d++)
{
e= tian(d);
s=s+e;
}
if ((tian(a))==365||b<=2)
for(f=0;f<b;f++)
{g= yue (f);
s=s+g;
}
else 
{for(f=0;f<b;f++)
{g= yue (f);
s=s+g;
}
s=s+1;
}
s=s+c;
if(s%7==5)
	printf("Friday");
	if(s%7==6)
	printf("Saturday");
	if(s%7==0)
	printf("Sunday");
	if(s%7==1)
	printf("Monday");
	if(s%7==2)
	printf("Tuesday");
	if(s%7==3)
	printf("Wednesday");
	if(s%7==4)
	printf("Thursday");
	return 0;
}

int tian(int n){
	int k;
	if(n==1899)
	k=0;
	else
	{
		if(n%4==0&&n%100!=0)
	         k=366;
	    else if (n%400==0)
	             k=366;
	    else k=365;
	
	}
	return k;	
}
int yue(int x)
{
	int m;
	if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)
	m=31;
	else if(x==2)
	m=28;
	else if(x==4||x==6||x==9||x==11)
	 m=30;
	 else if (x==0)
	 m=0;
	
	return m;	
}
