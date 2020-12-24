# Master Theorem

Master theorem can be used to find the time complexity of recurrence relations of the form

 > T(n) = a T(n/b) + o( n k log p n)

 - a -> No of subproblems
 - n/b -> Size of subproblems
#### Case 1 : a > bk
    T(n) = o(n log b a)
#### Case 2 : a = bk
 - p < -1
 
    T(n) = o(n log b a)
 - p = -1

    T(n) = o(n log b a . log 2 n)
 - p > -1

    T(n) = o(n log b a . log p+1 n)
#### Case 3 : a < bk
 - p < 0

    T(n) = o(n k)

 - p>=0

    T(n) = o(n k log p n)
