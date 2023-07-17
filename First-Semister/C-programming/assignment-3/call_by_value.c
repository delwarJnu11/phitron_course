pass By reference: When we calling a function, we pass the address of variables not pass the value of variables to the function known as pass By reference.In this method, the address of actual variables in the calling function are copied into the dummy variables of the called function. Using addresses we would have an access to the actual variables and we would be able to manipulate original variables.

//example pass by reference function
#include <stdio.h>
//pass by reference
void pass_by_reference(int *X){
    *X = 100;
    printf("Pass By refenece Function X- %d\n",*X);
}
int main(){
    int X = 10;
    pass_by_reference(&X);
    printf("Main Function X- %d\n",X);
    return 0;
}

// Output: 
// Pass By refenece Function X- 100
// Main Function X- 100

Above This example we can see that, We define a variable X in main function.Then we call a function Name "reference" and pass the address of variable A;

Another function where we received the memory address of X as parameter.in that function we changed the "X" memory location's value with  100. We changed main function's X momory location's value that's why we see that X changed the original varibale value in the main function. This type of function known as pass By reference.
