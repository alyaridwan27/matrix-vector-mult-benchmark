# Matrix Vector Multiplication Benchmark
For this assignment I will analyze the time and space complexity of the matrix and vector multiplication. In addition to that I will also be testing whether my code runs.

## Testing
### How to run
```
make; ./main_test.out
```
In your terminal you should see this as your output:
```
Test #1:
Actual V[0] = 32; Expected V[0] = 32
Actual V[1] = 31; Expected V[1] = 31
Actual V[2] = 39; Expected V[2] = 39

Test #2:
Actual V[0] = 109; Expected V[0] = 109
Actual V[1] = 49; Expected V[1] = 49
Actual V[2] = 69; Expected V[2] = 69

Test #3:
Actual V[0] = 56; Expected V[0] = 56
Actual V[1] = 89; Expected V[1] = 89
Actual V[2] = 101; Expected V[2] = 101
```
The first thing I did is that I created a function called multiply_vector_matrix which takes four inputs which are mat, vec, N, and vector_expected.
I then use N = 3 while also using 3 test cases. If the expected output and the actual output are equal, the function runs as expected.

## Time Complexity
### How to run
```
make time
```
In your terminal you should see this as your output:
```
Time elapsed with N = 0 : 0.000004 s
```
The graph below illustrates as the size of matrix increases the longer time it requires.
<img width="656" alt="Screen Shot 2022-12-13 at 19 02 53" src="https://user-images.githubusercontent.com/114371692/207312916-95a388d0-3baa-4c77-b31f-6cb273564105.png">


## Space Complexity
### How to run
```
make space
```
You can then see the result in your activity monitor (macOS).
<img width="928" alt="Screen Shot 2022-12-13 at 18 31 54" src="https://user-images.githubusercontent.com/114371692/207307066-e8de819e-aeb7-423b-8097-d5c246b9d36e.png">
The picture above displays the memory it takes for N = 1000
The graph below illustrates as the size of matrix increases the bigger memory it requires.
<img width="681" alt="Screen Shot 2022-12-13 at 19 03 02" src="https://user-images.githubusercontent.com/114371692/207312941-b6b5c53d-25a8-4cf9-bc05-32f094e628a0.png">

The graph below illustrates as the size of matrix increases the bigger memory it requires.
