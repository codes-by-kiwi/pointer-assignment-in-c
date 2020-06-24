/*Write a program which:
a)reads a float f from the keyboard,
b) reads a double d from the keyboard,
c) reads a char c from the keyboard,
d) adds the product of f and c and stores the final result in a variable 
called result,
e) prints the value of result on the screen,
f)uses a pointer called ptr_result to add 5 to result only using the pointer variable,
g) prints the new value on the screen, i)once using result and ii)once using ptr_result
*/
#include <stdio.h>

int main()

{
    float f;
    double d;
    char c;
    double result;


    scanf("%f",&f); //part a 

    scanf("%lf",&d); //part b
    getchar(); //makes sure that the enter does not get stuck in the buffer and the enter is not
    //considered the character that needs to be scanned in the next line 
    scanf("%c",&c);
    
    result = (f*d)+c; //part d 
    printf("Result is %lf\n",result); // part e 
    double *ptr_result=&result; //the pointer ptr_result points to result.
    *ptr_result=*ptr_result+5; //part f 
     printf("New value:%lf\n",result); //part g(i)
    printf("New value:%lf\n",*ptr_result); //part g(ii)

    return 1;
}