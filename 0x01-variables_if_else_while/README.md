The directory ***0x01-variables_if_else_while*** dwells on the application of conditional statements and loops.
First it introduces variables.

```VARIABLES```

In C, variables are named storage locations used to hold data. 
They allow us to store and manipulate values in our programs. 
Variables can store different types of data, such as integers, floating-point numbers, characters, and more. 
We can perform operations and calculations using variables to manipulate the data in our program. 
Variables provide flexibility and allow us to work with dynamic data.
We declare variables by specifying the data type and the variable name like so :

`data_type variable_name;`

For example:

int age;
char str;
float del_val;

We can also initialize a variable at the time of declaration.

```CONDITIONAL STATEMENTS```

In C, conditional statements allow us to make decisions in our programs based on certain conditions.
The most common conditional statement is the "if" statement.
It allows us to execute a block of code if a certain condition is true. Here's an example:

int age = 18;

if (age >= 18)
{
    printf("You are eligible to vote!\n");
} else
{
    printf("You are not eligible to vote yet.\n");
}

In this example, we use the "if" statement to check if the `age` variable is greater than or equal to 18.
If it is, the code inside the curly braces after the "if" statement is executed.
Otherwise, if the condition is false, the code inside the curly braces after the "else" statement is executed.

We can also use other conditional statements like "else if" to check for multiple conditions.
Conditional statements are powerful tools for controlling the flow of our programs based on different situations and conditions.

Conditional statements cn as well be expressed using Switch statements. But we focus on if-else for now.

```LOOPS```

In C, loops are used to repeat an action as many times as it is required.
The "while" loop is used to repeatedly execute a block of code as long as a certain condition is true.
Here's an example:

int count = 0;

while (count < 5)
{
    printf("Count: %d\n", count);
    count++;
}


In this example, we initialize a variable called `count` to 0. The while loop checks if the condition `count < 5` is true. If it is, the code inside the curly braces is executed. After each iteration, the `count` variable is incremented by 1 using the `count++` statement.

The loop continues to execute as long as the condition remains true. In this case, it will print the value of `count` and increment it until it reaches 5. The output will be:


count: 0
count: 1
count: 2
count: 3
count: 4


The while loop is useful when we want to repeat a certain task until a specific condition is no longer true. It allows for flexible and dynamic looping in our programs.

We also have the for and do while loops.
