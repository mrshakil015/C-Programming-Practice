/*How to Know about Inactive Gas in Chemistery at Predoic Table*/
#include<stdio.h>
int main()
{
    int atomic;
    printf("Enter The Atomic Number: ");
    scanf("%d",&atomic);
    if(atomic==2)
    printf("Name of the element: Helum.\n Symbol of the element: He\nAtomic Mass: 4.0026\nMelting Point: <-272.2 D C\nBoiling Point: -268.93 D C");
    else if(atomic==10)
    printf("Name of the element: Neon.\n Symbol of the element: Ne\nAtomic Mass: 20.18\nMelting Point: -248.67 D C\nBoiling Point: -246.05 D C");
    else if(atomic==18)
    printf("Name of the element: Argon.\n Symbol of the element: Ar\nAtomic Mass: 39.948\nMelting Point: -189.2 D C\nBoiling Point: -185.7 D C");
    else if(atomic==36)
    printf("Name of the element: Krypton.\n Symbol of the element: Kr\nAtomic Mass:83.80\nMelting Point: -156.6 D C\nBoiling Point: -152.3 D C");
    else if(atomic==54)
    printf("Name of the element: Xenon.\n Symbol of the element: Xe\nAtomic Mass: 131.29\nMelting Point: -111.9 D C\nBoiling Point: -107.1 D C");
    else if(atomic==18)
    printf("Name of the element: Redon.\n Symbol of the element: Rn\nAtomic Mass: 222.02\nMelting Point: -7.1 D C\nBoiling Point: 61.8 D C");
    else
    printf("You enter this Atomic Number it is not Inactive Gas.");
    
    getch();
    return 0;
}