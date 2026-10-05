# cis165-lab4
## Plan: average.cpp
- Variables:
- score1 (double) = 28
- score2 (double) = 32
- score3 (double) = 37
- score4 (double) = 24
- score5 (double) = 33
- Sum calculation: sum = score1 + score2 + score3 + score4 + score5
- Average calculation: average = sum/5
- Output: display sum and average, each with a clear label

## Plan: ocean_levels.cpp
- Constant (annual rate):
- ANNUAL_RATE (double) = 1.5
- Year values:
- year5 (int) = 5
- year7 (int) = 7
- year10 (int) = 10
- Calculations:
- oceanLvlyear5 (double) = ANNUAL_RATE * year5
- oceanLvlyear7 (double) = ANNUAL_RATE * year7
- oceanLvlyear10 (double) = ANNUAL_RATE * year10
- Output: display oceanLvlyear5, oceanLvlyear7, and oceanLvlyear10, each with a clear label and the unit "mm".

## Testing
| Program and test | Values used | Expected results | Actual results | Match or correction |
|---|---|---|---|---|
| Average — assigned values | 28, 32, 37, 24, 33 | Expected - Sum: 154, Average: 30.8 | Actual - Sum: 154, Average: 30.8 | Match |
| Average — changed values | 82, 23, 73, 42, 33| Expected - Sum: 253, Average: 50.6 | Actual - Sum 253:, Average: 50.6 | Match |
| Ocean — assigned rate | 1.5 | Expected - Ocean levels by year in order: 7.5, 10.5, 15 | Actual - Ocean level by year in order: 7.5, 10.5, 15 | Match |
| Ocean — changed rate | 4.2 | Expected - Ocean levels by year in order: 21.0mm, 29.4mm, 42mm | Actual - Ocean level by year in order: 21mm, 29.4mm, 42mm | Match |

## Explanation
1. The reason as to why the five values and the average must use the double data type is because int does not allow the code to provide the fullest calculation of the operation it was meant to for.

I restored the assigned values (28, 32, 37, 24, 33 and a rate of 1.5) and completed final runs of both programs.

## How to Compile and Run

    g++ -std=c++17 -Wall -Wextra average.cpp -o average
    ./average

    g++ -std=c++17 -Wall -Wextra ocean_levels.cpp -o ocean_levels
    ./ocean_levels
    
## Explanations

1. The five values and the average must use the double data type because an int cannot store anything after the decimal point. When the sum of the five values is divided by 5, the result is not a whole number. If every double were replaced with an int, the division would throw away the decimal and the average would come out as 30, which is not the complete answer. With doubles, the program keeps the decimal and gives the exact average of 30.8.

2.
score1 = 28, score2 = 32, score3 = 37, score4 = 24, score5 = 33.
sum = 28 + 32 + 37 + 24 + 33 = 154.
average = 154 / 5 = 30.8.
The program prints "Sum: 154" and "Average: 30.8".

3. C++ does division before addition. If I wrote score1 + score2 + score3 + score4 + score5 / 5, only score5 would be divided: 28 + 32 + 37 + 24 + 6.6 = 127.6, which is wrong. Storing the full total in sum first means all five values get divided by 5, giving the correct 30.8.

4. The rate is millimeters per year, so multiplying it by a number of years gives the total rise in millimeters. Each result is ANNUAL_RATE * years: 1.5 * 5 = 7.5 mm, 1.5 * 7 = 10.5 mm, and 1.5 * 10 = 15 mm.

5. The rate is used in all three calculations and should never change while the program runs. Making it const means C++ will give an error if any code tries to change it by accident. The name ANNUAL_RATE also explains what 1.5 means, and if the rate needs to change, I only edit one line. I did this in my test when I changed it to 4.2.

6. Storing a result in a variable keeps the math separate from the display. The variable name says what the number means, the result can be reused or checked, and it is easier to find mistakes because I can see the calculation on its own line instead of hidden inside an output statement.
