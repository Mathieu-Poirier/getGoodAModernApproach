# C program composition

## Directives

Commands intended for the preprocessor are called directives
Example: #include <library>

This includes information about the library before the program gets compiled

## Functions

AKA "procedures" or "subroutines"
We can write our own functions and use functions provided by a preprocessed library

Some functions compute a value and some functions don't

A function that computes a value returns that value using the return keyword

main is a required function (main gets called automatically when the program executes) this is AKA an entry point in programming but we don't need to complicate it

## Statements

A statement is a command to be executed when your program runs

pun.c uses the return statement and the printf function call
statements end with a semicolon this probably helps with tokenizing and parsing (you can imagine semicolon being tokenized as STATEMENTEND and switching states)

directive don't end with a semicolon: #define PI 3.14

