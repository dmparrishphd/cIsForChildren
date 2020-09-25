# !!

The `!` operator returns `0` if the operand is equivalent to non-zero and `1` if the operand is equivalent to zero.
This means you can "reduce" a value to it's equivalent logical value by using `!!`.

If `x` is equivalent to zero, `!!x` is equal to `0`.

if `x` is not equal to zero, `!!x` is equal to `1`.

# [!!

If `a` is an array, then `a[0]` refers to the first element and `a[!0]` refers to the second element.

In some cases, `a[!!x]` can match one value of the array with `x`, while `a[!x]` can match the array-values with other than `x`.
