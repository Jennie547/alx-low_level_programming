```FUNCTIONS AND NESTED LOOPS```

***FUNCTIONS***

In C, functions are blocks of code that perform a specific task.
They provide modularity and reusability in our programs.
There are two types of functions: user-defined functions and pre-defined functions.

User-defined functions are created by the programmer to perform a specific task.
Here's an example:

int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int result = addNumbers(5, 3);
    printf("Sum: %d\n", result);
    return 0;
}

In this example, we define a user-defined function called `addNumbers` that takes two integer parameters `a` and `b`.
It calculates the sum of `a` and `b` and returns the result.
In the `main` function, we call the `addNumbers` function with arguments 5 and 3, and store the returned value in the `result` variable. Finally, we print the result.

Pre-defined functions, also known as library functions, are provided by the C standard library.
They perform common tasks and are readily available for use. Here's an example using a pre-defined function:

#include <stdio.h>

int main() {
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    return 0;
}

In this example, we use the pre-defined function `printf` to display a message on the screen. 
We also use the pre-defined function `scanf` to read input from the user and store it in the `name` variable. 
Finally, we use `printf` again to greet the user with their name.

Both user-defined and pre-defined functions are essential in C programming as they allow us to break down complex tasks into smaller, manageable pieces of code. They promote code reuse and make our programs more organized and modular.
