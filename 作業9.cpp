#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

int numc,numd,numtoc;

for(numc=1;numc<=9;numc++){
for(numd=1;numd<=9;numd++){
printf("%d*%d=%d ",numc,numd,numc*numd);
}
printf("\n");
}

system("PAUSE");
return 0;
}
