# Author : t.me/AlexWayne0b10
Algorithm for Heart Shape Pattern with Name
Overview

This program generates a heart shape pattern made of asterisks (*). It also places the user's input name in the middle of the heart shape at the bottom.
Algorithm
1. Input Size and Name

    Prompt the user to enter the size of the heart.
        For example, if the input size is 15, the heart pattern will have a corresponding size.
    If the size is less than or equal to 2, the program asks the user to input a size greater than 2.
    If the size is valid, the program continues.

Input Example:

    Size (n): 15
    Name: "BATMAN"

2. Handle Name Input

    Read the user's name using fgets.
    Remove any newline character (\n) that might be appended to the name by fgets.
    Calculate the length of the name.

Example:

    Name: "BATMAN"
    Name length (namelength): 6

3. Calculate Starting Position for Name in Heart

    Calculate the starting position (startCount) where the name will be placed. The position is based on the size of the heart (n) and the length of the name.

Formula for startCount:

startCount = ((2 * n) - namelength) / 2

For n = 15 and namelength = 6:

startCount = ((2 * 15) - 6) / 2 = (30 - 6) / 2 = 24 / 2 = 12

4. Generate the Heart Shape

    The heart shape is made of two parts: the top (two triangles) and the bottom (a single inverse triangle with the name in the middle).

4.1. Top Part: Two Triangles

    Loop through the first half of the heart (top).
    For each iteration, print spaces to center the triangles and then print asterisks (*) in the correct pattern.
        The number of spaces before and between the asterisks decreases as the loop progresses.
        Print two symmetric triangles on top of each other.

4.2. Bottom Part: Inverse Triangle with Name

    Loop through the second half of the heart (bottom).
    Print spaces before the asterisks for the bottom triangle.
    In each row, check if the current row and column match the startCount position where the name should appear.
    Insert the name in the middle of the heart, replacing the asterisks with the name string.
        Print asterisks (*) in the remaining positions.

5. Edge Case Handling

    If the user enters a size n <= 2, prompt them again for a valid size and restart the process using a goto statement.

6. Exit Program

    After the heart is drawn, the program finishes execution.
