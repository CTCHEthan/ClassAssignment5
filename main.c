#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define MIN 0


    //prototypes
int addthree(int);
void showMessage();
void checkRange(int);

int main()
{   //main begins
    checkRange(101);
    return 0;
}   //main ends

int addthree(int x)
{
    return x + 3;
}

void showMessage()
{
    printf("Value is out of range!\n");
}

void checkRange(int enteredValue)
{
    if (enteredValue > MAX || enteredValue < MIN)
    {
        showMessage();
    }

}
