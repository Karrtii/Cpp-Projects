# Cpp-Projects
A repository for several interesting C++ projects.

**PrimalityTesting**
This program is more concerned with producing better algorithm. The user inputs an integer to test whether it is a prime number or not. Instead of making the program loop through all of the numbers up until the inputted integer and finding whether the number is only divisble by 1 and the number itself, a better approach could be taken.

The loop should only until the square root of the inputted number, and this can be proven to be working with prove by contradiction. Only looping until the square root of the number makes the program significantly more efficient, as can be seen with the Big O notation (where the first approach has O(n)=n, while the second approach is O(n)=sqrt(n)).

![image](https://user-images.githubusercontent.com/71009398/109958071-1a453e80-7ce6-11eb-9d87-bdba9a537383.png)

![image](https://user-images.githubusercontent.com/71009398/109958125-2df0a500-7ce6-11eb-8e66-ee3d811723af.png)

**Fibonacci**
Reads an integer from the user, and then returns the fibonacci sequence up until the read integer.

![image](https://user-images.githubusercontent.com/71009398/109956007-6fcc1c00-7ce3-11eb-9779-15457414a5a4.png)

**SolvingQuadraticEquation**
This program solves a quadratic equation, where the user enters 3 real numbers. The program calculates and gives the approriate response, with 2 solutions, 1 solution, no solution, no real solution, or a linear solution if the input happens to be a linear equation.

![image](https://user-images.githubusercontent.com/71009398/109959059-457c5d80-7ce7-11eb-9dd1-14f8ebac139e.png)

**kCombinations**
This program calculates a combination using the equation below:

![image](https://user-images.githubusercontent.com/71009398/109959296-8ffdda00-7ce7-11eb-9957-9b33d959430b.png)

![image](https://user-images.githubusercontent.com/71009398/109959613-04d11400-7ce8-11eb-9f01-b60987b5b3e4.png)

**AnalyzeDigits**
Takes an integer input from the user, then it counts how many digits there are in the input, and sums up the individual digits together. The digit count and the sum of the digits are then returned.

![image](https://user-images.githubusercontent.com/71009398/109956129-95592580-7ce3-11eb-92fb-ce1b0ff29754.png)

**TimeConversion**
This program converts time from 24-hour format to 12-hour format.

![image](https://user-images.githubusercontent.com/71009398/109959884-60030680-7ce8-11eb-98ee-92546d36d01b.png)

**Parity**
Reads an integer input from user, then returns whether the input is even or odd.

![image](https://user-images.githubusercontent.com/71009398/109956430-eec15480-7ce3-11eb-90e0-3859cdbdcc19.png)



