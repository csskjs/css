#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
char ip[100];
int i,n,k,d,count=0,m[100],m1[100],bin[100][100],bin1[100],j;
printf("\nEnter the length of message: ");
scanf("%d",&n);
d=448-(n*8);
printf("%d",d);
printf("\nEnter message in capital letters:");
for(i=0;i<=n;i++)
{
scanf("%c",&ip[i]);
m[i]=toascii(ip[i]);
m1[i]=m[i]-65;
j=0;
while(m1[i]>0)
{
bin[i][j] = m1[i] % 2;
m1[i] = m1[i] / 2;
j++;
}
}
for(i=1;i<=n;i++)
{
for(j=7;j>=0;j--)
{
printf("%d",bin[i][j]);
count++;
}
}
printf("1");
count++;
for(i=1;i<=d-1;i++)
{
printf("0");
count++;
}
printf("\nNumber of digits=%d",count);
}

// OUTPUT:
// Enter the length of message: 6
// 400
// Enter message in capital letters:ABCDEF
// 0000000000000001000000100000001100000100000001011000000000000000000000000000
// 0000000000000000000000000000000000000000000000000000000000000000000000000000
// 0000000000000000000000000000000000000000000000000000000000000000000000000000
// 0000000000000000000000000000000000000000000000000000000000000000000000000000
// 0000000000000000000000000000000000000000000000000000000000000000000000000000
// 00000000000000000000000000000000000000000000000000000000000000000000
// Number of digits=448