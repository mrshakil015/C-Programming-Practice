#include <stdio.h>

int main() {

   float sal; 
    scanf("%f",&sal);
    if(sal>0 && sal<=2000.00)
    {
        printf("Isento\n");
    }
    else if(sal>=2000.01 && sal<=3000.00)
    {
        sal = ((sal - 2000.00)*8)/100;
        printf("R$ %.2f\n",sal);
    }
    else if(sal>=3000.01 && sal<=4500.00)
    {
        sal = sal - 2000.00;
        sal = (((sal-1000.00)*18)/100) + ((1000*8)/100);
        printf("R$ %.2f\n",sal);
    }
    else if(sal>4500.00)
    {
        sal = sal - 2000.00;
        sal = (((sal-2500.00)*28)/100) + ((1500*18)/100)+((1000*8)/100);
        printf("R$ %.2f\n",sal);
    }

    return 0;
}
