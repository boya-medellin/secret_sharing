# Secret Sharing


## Scope
Three colleagues, Alice, Bob and Carol would like to find a novel way to share a secret
number S. They would like each to take a piece of a number and only if all three pieces are
presented then all of them will be able to reconstruct the secret number. One simple way is
to divide the secret number in three pieces and each of them to take a piece. However, they
found a more sophisticated solution.

They will create a polynomial: f(x) = a*x^2 + b*x + c, where c is the secret number S. Each
one of them will take a point of the polynomial. Alice will take (1, f(1)), Bob will take (2, f(2)),
and Carol will take (3, f(3)). Only when all three of them present their points they are able to
find the polynomial f(x).

1. Write a program called secret_sharing using C, to share the secret number S. Using
the “split” option and a secret number S (e.g. $ ./secret_sharing split 72), the program
will generate the 3 points (1, f(1)), (2, f(2)), and (3, f(3)) and will write them in the
standard output.

2. Extend the secret_program with the “join” option so that it recreates the secret
number S given the 3 points (1, f(1)), (2, f(2)), and (3, f(3)) and writes it in the
standard output. For example, $ ./secret_sharing join f(1) f(2) f(3) will output the
secret number S.

3. Generalize your solution for N friends: each of the friends gets one point: (1, f(1)), (2,
f(2)), (3, f(3)), …, (N, f(N)). When any three out of the N friends present their points

## Implementation

The two main options are split() and join() which are implemented by the corresponding 
functions.
-Split: The secret number to be distributed is read from the command line.
        ```
        ./secret_sharing split 1050
        ```
      Each friend gets a pair of values. These values are written to output.txt
-Join: The secret number is reconstructed from N pairs of values, where N is the minimum
     number of friends needed.
     e.g for 3 friends needed: 
     ```
     ./secret_sharing join 1 f(1) 2 f(2) 3 f(3)
     ```
    

