# Tokens

The C files is read as a sequence of tokens when it is parsed

We can compress programs quite a bit because C dosen't care about whitespace except for directive lines

Luckily we can space things out also because of this, which makes programs easier to read

We cannot put spaces between tokens since that would be difficult to parse

For example:

float floating_point
f l oat floating_point **DOES NOT WORK**

We also cannot split a string between two lines 