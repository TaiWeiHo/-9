#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

int n,s;

for(n=1;n<=9;n++){
for(s=1;s<=9;s++){
printf("%d*%d=%d ",n,s,n*s);
}
printf("\n");
}

system("PAUSE");
return 0;
}
