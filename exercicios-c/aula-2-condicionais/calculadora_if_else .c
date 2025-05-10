/*
Peça uma tabuada entre 1 ao 5 usando if e else
*/

#include <stdio.h>


int main(){
    int a;
    printf("do 1 ao 5 qual tabuada vc quer?:");
    scanf("%d", &a);

    if(a==1)
    {
        printf("1x1=1\n1x2=2\n1x3=3\n");


    } else if (a==2) 
    {
        printf("2x1=2\n2x2=4\n2x3=6\n");


    } else if (a==3)
    {
        printf("3x1=3\n3x2=6\n3x3=9\n");


    } else if (a==4) 
    {
        printf("4x1=4\n4x2=8\n4x3=12\n");

    } else if (a==5) 
    {
        printf("5x1=5\n5x2=10\n5x3=15\n");

    } else {
        printf("Nao tem essa tabuada");

    }




    return 0;
}
    