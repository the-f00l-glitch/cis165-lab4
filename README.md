Why should the five values and the average use the double data type?
  - the reason we use [double] is when we divide the sum of the five variables by 5 we get a decimal and we wont get a accurate number if we use [int]

Trace the assigned values through sum and average.
  - values: [28 + 32 + 37 + 24 + 33]
  - sum calculation:  (28+32= 60) -> (60+37= 97) -> (97+24= 121) -> (121+33= 154) and sum = 154
  - average calculation: 154.0 / 5.0(the numbers of values) = 30.8

Why divide the completed sum rather than only the final value?
  - if you divde by the final value you would get the wrong average (28 + 32 + 37 + 24 + (33/5)) = 127.6
  - instead of getting the correct average ((28 + 32 + 37 + 24 + 33) / 5) = 30.8

How ocean-level calculations work  
  - (years * rate= raise)

Why [ANNUAL_RATE] is a good named constant
  - because it a fixed parameter that need to stay the same so you can get the correct ocean level

Why store calculations in variables before [<<cout]
  - its easier to edit if changes are needed
  - makes code a lot cleaner to look at
