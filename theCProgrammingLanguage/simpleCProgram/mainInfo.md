# The main function

The int keyword before main indicates it will return an integer value

The word void in the arguments list indicates that main does not posses arguments (hence we know it won't need parameters on the stack but that's more advanced)

return 0; returns the integer 0 indicating a sucessful completion of our program (0 status code is good, 1 status code bad :3 )

this is funnny because ret in x86 assembly can pop the address of the procedure off the stack and say ret 4 means pop the address and 4 bytes off the stack (probably a function argument)

What we're actually returning could be in a register or data segment
