#include <stdio.h>

int someDisplay();
void funct1(int);
void funct2(int);
typedef void funcType(int);

int main() {
    int (*funcPtr)();
    funcPtr = someDisplay;

    printf("\nAddress of function someDisplay is %p\n", funcPtr);

    (*funcPtr)();

    funcType *func_ptr = NULL;
    func_ptr = funct1;
    (*func_ptr)(100);

    func_ptr = funct2;
    (*func_ptr)(200);

    return 0;
}

int someDisplay() {
    printf("\n--Displaying some texts--\n");
    return 0;
}

void funct1(testarg) {
    printf("funct1 got and argument of %d\n", testarg);
}

void funct2(testarg) {
    printf("funct2 got and argument of %d\n", testarg);
}