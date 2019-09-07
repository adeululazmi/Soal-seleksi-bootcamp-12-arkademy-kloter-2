#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int rows;
    printf("Masukan Nilai: ");
    scanf("%d",&rows);
    int i,j,k;
    i=rows;
    while(i>=1){
        j=rows;
        while(j>i){
        printf(" ");
        j--;
    }
    k=1;
while(k<2*i){
    if(i==rows || (k==1 || k==2*i-1))
        printf("*");
    else
        printf(" ");
    k++;
}
i--;
printf("\n");
    }
return 0;
}
