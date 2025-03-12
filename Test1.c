/*1. The way of bullet is: 𝑦(𝑥) = - 1/2 𝑔𝑥2 + 𝑥 where g is the acceleration due to gravity g = 9.8 .
• Write a function to calculate 𝑦(𝑥)
• Calculating y(x) with x = 5 and displaying the result on the screen : 'The position of
bullet: y(5)'.
• Entering any number from keyboard for x variable then calculate 𝑦(𝑥) and display
with conditions:
• 'The bullet got out' if 𝑦(𝑥) > 50 or 𝑦(𝑥) < 30
• 'The bullet got a goal' if 𝑦(𝑥)≤50 and 𝑦(𝑥)≥30 
*/
#include <stdio.h>
int main(){
    float x;
    float y;
    float g = 9.8;

    printf("The position of bullet when x = 5 is: y(5) = %.2f\n", y = -0.5 * g * 5 * 5 + 5);
    
    printf("Enter x: ");
    scanf("%f", &x);
    y = -0.5 * g * x * x + x;
    printf("The position of bullet when x = %.2f is: y(%.2f) = %.2f\n", x, x, y);
    
    if(y > 50 || y < 30){
        printf("The bullet got out\n");
    }
    if(y >= 30 && y <= 50)
    {
        printf("The bullet got a goal\n");
    }
  return 0;
}