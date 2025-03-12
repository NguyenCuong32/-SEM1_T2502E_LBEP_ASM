#include <stdio.h>
void phan_12()
{
    float g = 9.8;
    float x = 5;
    float y = - 0.5*g*x*x+x;
    y = - 0.5*g*x*x+x;
    printf("The position of bullet: y(5) = %.1f ",y);
}   
void phan_3()
{
    float g = 9.8;
    int x;
    float y;
    printf("Enter x = ");
    scanf("%d",&x);
    // y = - 0.5*g*x*x+x;
    // printf("y(%d) = %.2f \n",x,y);
    if (y > 50 || y < 30)
    {
        printf("The bullet got out \n");
    }
    else 
         {
            printf("The bullet got a goal \n");
         }
        
   
}
int main()
{
   // phan_12();
   phan_3();
   return 0;

}