#include<stdio.h>
int main()
{
    int resolution1, resolution2;
    float length,breadth,byte,kb,mb,gb;
    
     printf("Enter image length size & resolution: ");
    scanf("%f %d",&length,&resolution1);
   
       printf("Enter image breadth size & resolution: ");
    scanf("%f %d",&breadth,&resolution2);
 
    
    byte=((length*resolution1)*(breadth* resolution2))/8;
    
    kb=byte/1024;
    mb=kb/1024;
    gb=mb/1024;
    
    if(kb<1024)
    printf("Image Size= %.2f B\n",byte);
    else if(kb<=1024)
    printf("Image Size= %.2f KB\n",kb);
    else if(mb<=1024)
    printf("Image Size= %.2f MB\n",mb);
    else if(gb<=1024)
    printf("Image Size= %.2f GB\n",gb);
    
    return 0;
}