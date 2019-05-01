#include<stdio.h>
void main()
{
int i,j,b=0;
int s1[4][16] = {
14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7,
0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8,
4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0,
15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13 };
int a[1][6] = {
0,0,1,0,1,0};
printf("INTPUT:-\n");
for(i=0;i<1;i++)
{
for(j=0;j<6;j++)
printf("%d",a[i][j]);
printf("\n");
}
int mess_row,mess_col,mess,mess_b[4];
for(i=0;i<1;i++)
{
mess_row=(a[i][5])+(a[i][0]*2);
//printf("mess_row:%d",mess_row);
mess_col=a[i][4]+(a[i][3]*2)+(a[i][2]*4)+(a[i][1]*8);
//printf("mess_col:%d",mess_col);
}
mess=s1[mess_row][mess_col];
//printf("mess:%d",mess);
while (mess > 0)
{
// storing remainder in binary array
mess_b[b] = mess % 2;
mess = mess / 2;
//printf("binary:%d",mess_b[i]);
b++;
}
//printf("OUTPUT:-\n");
for(i=3;i>=0;i--)
{
printf("%d",mess_b[i]);
}
}

// OUTPUT:
// 22D50220:~$ gcc Sbox.c
// c502@22D50220:~$ ./a.out
// INTPUT:-
// 001010
// 1111

