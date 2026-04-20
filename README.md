# T - C Exercises Collection

This repository contains small standalone C exercises (mostly string/number utilities and classic algorithmic mini-problems).

## Build

Compile any file individually:

```bash
gcc -Wall -Wextra -Werror <file>.c -o <program>
```

Example:

```bash
gcc -Wall -Wextra -Werror add_prime_sum.c -o add_prime_sum
./add_prime_sum 24
```

## File Index

- `add_prime_sum.c`: Sum all prime numbers from `2` up to the positive integer given as argument.
- `alpha_mirror.c`: Replace each lowercase/uppercase letter with its mirrored alphabet counterpart (`a<->z`, `b<->y`, ...).
- `camel_to_snake.c`: Convert camelCase text to snake_case.
- `do_op.c`: Basic calculator program for expressions like `number operator number`.
- `epur_str.c`: Trim and normalize spaces so words are separated by exactly one space.
- `expand_str.c`: Expand spacing so words are separated by three spaces.
- `first_word.c`: Print the first word from the input string.
- `fizz_buzz.c`: Print numbers from 1 to 100 with Fizz/Buzz substitutions.
- `flood_fil.c`: Flood-fill algorithm on a 2D character map.
- `fprime.c`: Factorize a positive integer into prime factors.
- `ft_atoi.c`: Convert a numeric string to integer.
- `ft_atoi_base.c`: Convert a string number from an arbitrary base to integer.
- `ft_is_power_2.c`: Check whether an integer is a power of 2.
- `ft_itoa.c`: Convert an integer to a newly allocated string.
- `ft_list_foreach.c`: Apply a function to each element in a linked list.
- `ft_list_remove.c`: Remove list nodes matching a reference value.
- `ft_list_size.c`: Count nodes in a linked list.
- `ft_putstr.c`: Output a string to standard output.
- `ft_range.c`: Allocate and return an integer range from `start` to `end`.
- `ft_rrange.c`: Allocate and return a reversed integer range.
- `ft_split.c`: Split a string into words and return an array of strings.
- `ft_strcmp.c`: Compare two strings lexicographically.
- `ft_strcpy.c`: Copy one string into another buffer.
- `ft_strcspn.c`: Return the length of initial segment not containing reject chars.
- `ft_strdup.c`: Duplicate a string with dynamic allocation.
- `ft_strlen.c`: Compute string length.
- `ft_strpbrk.c`: Locate first character in a string from a set.
- `ft_strrev.c`: Reverse a string in place.
- `ft_strspn.c`: Return the length of initial segment containing only accepted chars.
- `ft_swap.c`: Swap two integers.
- `hidenp.c`: Check if first string is hidden as a subsequence in second string.
- `inter.c`: Print unique common characters between two strings in order of first appearance.
- `last_word.c`: Print the last word from input string.
- `lcm.c`: Compute least common multiple.
- `max.c`: Return maximum value in an integer array.
- `paramsum.c`: Print the count of command-line arguments.
- `pgcd.c`: Compute greatest common divisor (GCD).
- `print_bits.c`: Print binary representation of a byte.
- `print_hex.c`: Print an integer as hexadecimal.
- `repeat_alpha.c`: Repeat each alphabet character based on its index in the alphabet.
- `rev_print.c`: Print a string in reverse.
- `rev_wstr.c`: Print words in reverse order.
- `reverse_bits.c`: Reverse bits in a byte.
- `rot13.c`: Apply ROT13 cipher to text.
- `rotone.c`: Rotate alphabetic characters by one position.
- `rotstring.c`: Rotate first word of a string to the end.
- `rstr_capitalizer.c`: Capitalize only the last letter of each word.
- `search_and_replace.c`: Replace occurrences of one character by another in a string.
- `snake_to_camel.c`: Convert snake_case text to camelCase.
- `sort_int_tab.c`: Sort an integer array.
- `sort_list.c`: Sort a linked list using a comparison function.
- `str_capitalizer.c`: Capitalize first letter of each word and lowercase others.
- `swap_bits.c`: Swap high and low nibbles of a byte.
- `tab_mult.c`: Print multiplication table for a given number.
- `ulstr.c`: Swap lowercase to uppercase and uppercase to lowercase.
- `union.c`: Print unique characters present in either of two strings.
- `wdmatch.c`: Check whether first string can be formed as an ordered subsequence of second.

## Notes

- Most files are intended to be independent exercises.
- Some files (especially list/flood-fill exercises) may rely on helper structs or headers depending on your exam setup.
- Input/output behavior follows typical 42 exam exercise expectations.
