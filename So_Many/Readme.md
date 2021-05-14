# So many

Look at them! All of the fizzes and the buzzes are fizzbuzzing !

# The Naive

	The naive approach to FizzBuzz.

# The Performant

	One string. One write call. As performant as can be... After the fastes way to write FizzBuzz is to already have written FizzBuzz

# The IfLess

	For this one I tried to write without using if statement, which leads to using the `==` as a kind of condition that regulates the printing of fizz, buzz and numbers.

	`(i == (next3 += ((i == next3) * 3)) - 3);` In short, this entire expression evaluates to 1 when 1 is a multiplw of 3 and 0 otherwise. First, if is a multiple of 3, then next 3 gets incremented by 3 (sinze i == next3 returns one, we multiply it by 3). But since, if i was a multiple of 3, next3 would ave been incremented to the next multiple, we can't check if i == next3, we need to check if i == (next3 -3);
