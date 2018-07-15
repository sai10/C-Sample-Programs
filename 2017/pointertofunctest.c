#include<stdio.h>
void display();
void main()
{
    void (*func_ptr)();
    func_ptr=display;
    printf("Address of function display is %u",func_ptr);
    (*func_ptr)();
}
void display()
{
    printf("\nLONG LIVE VIRUSES");
}

