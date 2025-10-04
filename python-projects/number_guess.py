#Number Guessing Game

import random

print("Welcome to the Number Guessing Game! 🎲")
print("I'm thinking of a number between 1 and 20.")

secret_number = random.randint(1, 20)
attempts = 0
guess = 0

while guess != secret_number:
    guess = int(input("Take a guess: "))
    attempts += 1

    if guess < secret_number:
        print("Too low! Try again.")
    elif guess > secret_number:
        print("Too high! Try again.")
    else:
        print(f"🎉 Congratulations! You guessed the number in {attempts} attempts.")
