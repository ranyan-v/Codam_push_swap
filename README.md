*This project has been created as part of the 42 curriculum by `rayan`*

# push_swap
## Description

push_swap is a sorting algorithm project from the 42 curriculum. The objective is to sort a list of integers using two stacks (a and b) and a limited set of predefined operations.

The challenge is not only to sort correctly, but to do so with the minimum number of operations, pushing you to design efficient algorithms and deeply understand data structures.

The program takes a list of integers as input, validates them, and outputs a sequence of operations that will sort the numbers in ascending order.

## Instructions
### Compilation

To build the program, run:

make

This will compile all source files and create the executable:

push_swap

### Cleaning

make clean     # removes object files
make fclean    # removes object files and executable
make re        # full rebuild

### Usage

Run the program with a list of integers:

./push_swap 2 1 3 6 5 8

Or with quoted arguments:

./push_swap "2 1 3 6 5 8"

The program will output a sequence of operations:

pb
ra
sa
...

### Allowed Operations
| Operation | Description                            |
| --------- | -------------------------------------- |
| `sa`      | Swap the first two elements of stack A |
| `sb`      | Swap the first two elements of stack B |
| `ss`      | `sa` and `sb` at the same time         |
| `pa`      | Push from B to A                       |
| `pb`      | Push from A to B                       |
| `ra`      | Rotate A (first element becomes last)  |
| `rb`      | Rotate B                               |
| `rr`      | `ra` and `rb`                          |
| `rra`     | Reverse rotate A                       |
| `rrb`     | Reverse rotate B                       |
| `rrr`     | `rra` and `rrb`                        |


## Algorithm & Data Structure Explanation
### Data Structure

The program uses a doubly linked list:

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*previous;
}	t_node;

This allows:

Efficient rotations (forward & backward)
Easy node insertion/removal
Flexible traversal

### Input Handling

The program:

Normalizes input (handles quoted strings)
Validates numbers
Checks for duplicates
Converts safely to integers (safe_atoi)
Builds stack A


### Indexing Strategy

Each value is assigned an index based on its sorted position.

Example:

Original:  42 10 -3
Sorted:    -3 10 42
Indexes:    2  1  0

This simplifies comparisons and enables efficient sorting logic.

### Sorting Strategy
#### Small inputs (≤ 5 numbers)
Hardcoded optimal solutions:
- sort_two
- sort_three
- sort_four_or_five

These ensure minimal moves.


#### Large inputs (> 5 numbers)

The algorithm uses a chunk-based strategy:

1.Divide elements into ranges (chunks)

2.Push elements from A → B (fill_b)

3.Select the cheapest move using:
- rotation_cost
- cheapest_move

4.Rebuild stack A in sorted order

#### Cost Optimization

Each move is evaluated based on:

Position in stack
Required rotations
Combined operations (rr, rrr)

The algorithm always selects the least expensive move, minimizing total operations.

#### Error Handling

The program exits with:

Error

In case of:

Invalid numbers
Duplicates
Integer overflow

Memory is always properly freed.

## Resources
### Documentation & References
42 subject: push_swap
man 3 malloc
man 3 free
man 2 write
Linked list concepts (data structures)
Sorting algorithms (chunking, greedy strategies)

### AI Usage Declaration

AI (ChatGPT) was used only for:

Debugging explanations (linker errors, Makefile issues)
Clarifying algorithm strategies (chunking, cost calculation)
Improving documentation clarity and structure
Generating this README in proper 42 format

All code, data structures, and algorithm implementations were written manually.