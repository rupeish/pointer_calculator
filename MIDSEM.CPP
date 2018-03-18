#include<conio.h>
#include<iostream>
using namespace std;
#include<math.h>
#include<stdio.h>

void sem1(int a)
{
//clrscr();
int A,H[100],I[1000],J[100],K[100],L[100],r,i,k,j,p,u,c[1000],d[1000],e[1000],f[1000],g[1000],c1[1000],d1[1000],e1[1000],f1[1000],g1[1000], h,GR[1000];
float v[1000],w[1000],x[1000],y[1000],z[1000],C,D,E,F,G;
char name[100][50];
std::cout<<"======================================";
for (h=1;h<=a;h++)
{

std::cin.ignore();
std::cout<<"\nEnter the name of the student; Roll no. :"<<h;
std::cin.getline(name[h],50);
std::cout<<"\nEnter GR number :";
std::cin>>GR[h];
std::cout<<"\nEnter the marks for roll no. "<<h;
std::cout<<"\nApplied Physics             : ";
std::cin>>c[h];
std::cout<<"\nCalculus                    : ";
std::cin>>d[h];
std::cout<<"\nEngineering Mechanics       : ";
std::cin>>e[h];
std::cout<<"\nEngineering Drawing         : ";
std::cin>>f[h];
std::cout<<"\nEngineering Fundamentals    : ";
std::cin>>g[h];





cout<<"======================================";
}



for (h=1;h<=a;h++)
{
H[h]=c[h];
I[h]=d[h];
J[h]=e[h];
K[h]=f[h];
L[h]=g[h];
}




//////////////////////////////////////////

//1
std::cout<<endl;
std::cout<<"sub 1"<<endl;;
for(j=0;j<a;j++)
{
for(h=1;h<a;h++)
{
if (c[h] < c[h + 1])
{
k=c[h];
c[h]=c[h +1];

c[h+1]=k;
}}
}


if (a<5)
{
//C is out of marks
C=c[1];
}

else
{
r=(a/5);
C=0;
for (p=1;p<=r;p++)
{
C=C+c[p];
}
C=(C/r);
}

for ( u=1;u<=a;u++)
{
if (H[u]>=C)
{
//v[u] is the student's percentile marks for that subject
v[u]=100;
}
else
{
v[u]=((H[u]/C)*100);
}
std::cout<<"students "<<u<<" marks "<<v[u]<<endl;

}

//////////////////////////////////////////////////////////

//2
std::cout<<endl;
std::cout<<"sub 2"<<endl;
for(j=0;j<a;j++)
{
for(h=1;h<a;h++)
{
if (d[h] < d[h + 1])
{
k=d[h];
d[h]=d[h +1];

d[h+1]=k;
}}
}

r=(a/5);
if (a<5)
{
D=d[1];
}
else
{
D=0;
for (p=1;p<=r;p++)
{
D=D+d[p];
}
D=(D/r);
}



for ( u=1;u<=a;u++)
{
if (I[u]>=D)
{
//v[u] is the student's percentile marks for that subject
w[u]=100;
}
else
{
w[u]=((I[u]/D)*100);
}
std::cout<<"students "<<u<<" marks "<<w[u]<<endl;

}

///////////////////////////////////////////////////////////

//3
std::cout<<endl;
std::cout<<"sub 3"<<endl;
for(j=0;j<a;j++)
{
for(h=1;h<a;h++)
{
if (e[h] < e[h + 1])
{
k=e[h];
e[h]=e[h +1];

e[h+1]=k;
}}
}

r=(a/5);
if (a<5)
{
E=e[1];
}
else
{
E=0;
for (p=1;p<=r;p++)
{
E=E+e[p];
}
E=(E/r);
}


for ( u=1;u<=a;u++)
{
if (J[u]>=E)
{
//v[u] is the student's percentile marks for that subject
x[u]=100;
}
else
{
x[u]=((J[u]/E)*100);
}
std::cout<<"students "<<u<<" marks "<<x[u]<<endl;

}

////////////////////////////////////////////////////////////////

//4
std::cout<<endl;
std::cout<<"sub 4"<<endl;
for(j=0;j<a;j++)
{
for(h=1;h<a;h++)
{
if (f[h] < f[h + 1])
{
k=f[h];
f[h]=f[h +1];

f[h+1]=k;
}}
}

r=(a/5);
if (a<5)
{
F=f[1];
}
else
{
F=0;
for (p=1;p<=r;p++)
{
F=F+f[p];
}
F=(F/r);
}


for ( u=1;u<=a;u++)
{
if (K[u]>=F)
{
//v[u] is the student's percentile marks for that subject
y[u]=100;
}
else
{
y[u]=((K[u]/F)*100);
}
std::cout<<"students "<<u<<" marks "<<y[u]<<endl;

}

/////////////////////////////////////////////////////////////////

//5
std::cout<<endl;
std::cout<<"sub 5"<<endl;
for(j=0;j<a;j++)
{
for(h=1;h<a;h++)
{
if (g[h] < g[h + 1])
{
k=g[h];
g[h]=g[h +1];

g[h+1]=k;
}}
}

r=(a/5);
if (a<5)
{
G=g[1];
}
else
{
G=0;
for (p=1;p<=r;p++)
{
G=G+g[p];
}
G=(G/r);
}


for ( u=1;u<=a;u++)
{
if (L[u]>=G)
{
//v[u] is the student's percentile marks for that subject
z[u]=100;
}
else
{
z[u]=((L[u]/G)*100);
}
std::cout<<"student "<<u<<" marks "<<z[u]<<endl;
}




//////////////////////////////////




getch();
}







//void sem2(int a)
//{

//}


void internal(int a,int b)
{

if (b==1)
{
sem1(a);
}

//else if (b==2)
//{
//sem2(a);
//}

}


int main()

{
//clrscr();
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v;
char E;

std::cout<<"\n\n     VISHWAKARMA INSTITUTE OF TECHNOLOGY   ";
std::cout<<"\n\nEnter the division :";
std::cin>>E;
std::cout<<"\n\nEnter the number of students :";
std::cin>>a;
std::cout<<"\n\nThe semester is :  ";
std::cout<<"\n\n   1)First semester		2)second semester"<<endl;
std::cin>>b;

internal(a,b);



getch();
}


