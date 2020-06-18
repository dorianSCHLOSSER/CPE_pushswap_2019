# CPE_pushswap_2019

~make
~./pushswap [number] [number] [number] ... ...

The game is made up of two lists of numbers named l_a and l_b.
In the beginning, l_b will be empty and l_a will contain a certain amount of positive or negative numbers.
The objective of the game is to sort l_a.
In order to accomplish this, you will only have access to the following operation:

• sa
swap the first two elements of l_a (nothing will happen if there aren’t enough elements).
• sb
swap the first two elements of l_b (nothing will happen if there aren’t enough elements).
• pa
take the first element from l_b and move it to the first position on the l_a list (nothing will happen if
l_b is empty).
• pb
take the first element from l_a and move it to the first position on the l_b list (nothing will happen if
l_a is empty).