# CMPE 252 C Programming

## Homework 1

### Q1

In this question, you will calculate the total score of a football team. There are three states in total and they are Win (W) which gives 3 points, Draw (D) which gives 1 point and Lost (L) which gives no points.

<br>

**Getting to know input file:**

A sample input file (team1.txt) is given as follows:
```
5 WWLDDD
10 WWLLDDLL
3 LLDW
```
Each line contains team id and results of matches. There is only one white space between team id and results of matches. You should calculate the total points for each team.

<br>

**Example Input and Output:**

```
Enter txt file name:

> team1.txt

There are 3 teams in total.
Team 5: 9
Team 10: 8
Team 3: 4
```

### Q2

You have the following formula for the non-negative numbers:

![image](https://github.com/user-attachments/assets/bbacc1eb-34db-4ea1-beae-e1210fed11dd)

X<sub>0</sub> = 10. You should read the number a, b, c from the user and they are float.

Also, user enters range for x<sub>n</sub> and you should print all x<sub>n</sub> values within this range. You should print **two** digits after decimal point for the result of the above formula.

<br>

**Example Input and Output:**

```
Enter value of a:

> 4

Enter value of b:

> 5

Enter value of c:

> 1

Enter minimum value of x_n:

> 3

Enter maximum value of x_n:

> 6

x_3: 1242.25
x_4: 6211.00
x_5: 31054.75
x_6: 155273.5
```

### Q3

You would like to find the area under the curve y = f(x) between the lines x = a and x = b . One way to approximate this area is to use line segments as approximations of small pieces of the curve and then to sum the areas of trapezoids created by drawing perpendiculars from the line segment endpoints to the x - axis, as shown in Figure 1. We will assume that f(x) is nonnegative over the interval [a , b]. The trapezoidal rule approximates this area T as

![image](https://github.com/user-attachments/assets/aa020d5b-77c2-461c-92d5-567ba4a5ec4e)

for n subintervals of length h:

![image](https://github.com/user-attachments/assets/2cfc1fcc-ead5-4141-b71b-f0336140afd8)

![image](https://github.com/user-attachments/assets/c558fe97-21a1-4a14-aff8-be6929ccb05f)


You should calculate the value of T for the function: **x<sup>c</sup> + 2d**, where c and d are integer user inputs. You should print **two** digits after decimal point for the value of T.

<br>

**Example Input and Output:**

```
Enter value of a:

> 1

Enter value of b:

> 9

Enter value of n:

> 4

Enter value of c:

> 1

Enter value of d:

> 2

T: 54.00
```
