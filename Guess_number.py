##This is a guessing program where user guesses the number between 0 to 100.

import random

number= random.randint(0,100)
while (1):
    guess= input("Guess the number between 0 to 100 ")
    if guess<number:
        print("The number is too low,guess higher")
    elif guess==number:
        print("Congratulations,you guessed it right!")
        break
    else:
        print("The number is too high,guess lower")
