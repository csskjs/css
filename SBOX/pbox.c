P-BOX:
#include<stdio.h>
int main()
{
int q[8][8],i,j;
//you can put this array in binary also this is for better understanding
int p[8][8]={
1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,
9 ,10,11,12,13,14,15,16,
17,18,19,20,21,22,23,24,
25,26,27,28,29,30,31,32,
33,34,35,36,37,38,39,40,
41,42,43,44,45,46,47,48,
49,50,51,52,53,54,55,56,
57,58,59,60,61,62,63,64
};
for(i=0;i<8;i++)
{
for(j=0;j<8;j++)
{
q[i][j]=p[7-i][j];
}
}
for(j=0;j<8;j++)
{
if(j%2==1)
{
for(i=0;i<8;i++)
{
printf("%d | ",q[i][j]);
}
printf("\n");
}
}
for(j=0;j<8;j++)
{
if(j%2==0)
{
for(i=0;i<8;i++)
{
printf("%d | ",q[i][j]);
}
printf("\n");
}
}
}