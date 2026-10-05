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
