#include <stdio.h>
int gcd(int key1, int key2){
if(key1 == 0 || key2 == 0){
return 0;
}
else if(key2 == 1){
return 1;
}
// printf("\n%d %d\n",key1,key2);
gcd(key2,key1%key2);
}
int euclidean(int a, int b){
int t=0;
int newt=1;
int r=b;
int newr=a;
int q;
int temp1;
int temp2;
while(newr!=0){
q = r/newr;
temp1 = t;
temp2 = newt;
t = temp2;
newt = temp1-q*temp2;
temp1 = r;
temp2 = newr;
r = temp2;
newr = temp1-q*temp2;
}
if(t<0){
t = t+b;
}
return t;
}
unsigned long int exponent(int x, int y, int n)
{
unsigned long int temp;
if( y == 0)
return 1;
temp = exponent(x, y/2,n)%n;
// printf("\n%d %lu",y,temp);
if (y & 1)
//if odd
return ((x*temp*temp)%n);
else
return ((temp*temp)%n);
}
int encrypt(int m, int e, int n){
unsigned long int exp;
exp = exponent(m,e,n);
return (exp%n);
}
int decrypt(int c, int d, int n){
unsigned long int exp;
exp = exponent(c,d,n);
// printf("\n***exp: %lu****\n",exp);
return (exp%n);
}
void main(){
int p,q;
int n,phi;
int e,d;
int m,c;
int decrypt_m;
int i;
printf("Enter p and q: ");
scanf("%d",&p);
scanf("%d",&q);
printf("\nEnter value of m: ");
scanf("%d",&m);
n = p*q;
phi = (p-1) * (q-1);
//Comment this loop if e is static
for(i=2;i<phi;i++){
if(gcd(phi,i) == 1){
e = i;
break;
}
}
// printf("***e: %d***",e);
d = euclidean(e,phi);
// printf("***d: %d***",d);
c = encrypt(m,e,n);
// printf("***c: %d***",c);
printf("\nEncrypted value: %d",c);
decrypt_m = decrypt(c,d,n);
printf("\nDecrypted value: %d",decrypt_m);
}

// OUTPUT:
// c502@22D50219:~$ gedit rsa.c
// ^C
// c502@22D50219:~$ gcc rsa.c -lm
// c502@22D50219:~$ ./a.out
// Enter p and q: 7 11
// Enter value of m: 5
// Encrypted value: 47
// Decrypted value: 5c502@22D50219:~$