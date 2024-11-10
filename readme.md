# VikasCode

### Algorithm to Print Fibonacci Series up to n Terms
1. **Start**
2. **Initialize Variables**:

   - `n`: number of terms in the series (input from the user)

   - `t1 = 0`: the first term in the Fibonacci series

   - `t2 = 1`: the second term in the Fibonacci series

   - `nextTerm`: variable to store the next term in the series

3. **Prompt User** to enter the number of terms (`n`).

4. **Input** the value of `n`.

5. **Print "Fibonacci Series:"**.

6. **Loop from `i = 1` to `i <= n`**:

   - **Step 1**: Print the current term `t1`.

   - **Step 2**: Calculate `nextTerm` as the sum of `t1` and `t2`.

   - **Step 3**: Update `t1` with the value of `t2`.

   - **Step 4**: Update `t2` with the value of `nextTerm`.

7. **End Loop**

8. **Print a new line** after the series is complete.

9. **End**