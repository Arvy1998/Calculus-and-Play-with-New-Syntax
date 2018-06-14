import math
low = 0
high = 100
guess = 50
choice = ""

print("Please think of a number between 0 and 100!")

while(choice != "c"):
    print("Is your secret number " + str(math.floor(guess)))
    # print("low is :" + str(round(low)))
    # print("high is :" + str(round(high)))
    low = math.floor(low)
    high = math.floor(high)
    choice = input("Enter 'h' to indicate the guess is too high. Enter 'l' to indicate the guess is too low. Enter 'c' to indicate I guessed correctly.")
    if (choice == "l"):
        low = guess
    elif (choice == "h"):
        high = guess
    elif(choice != "c"):
        print("Sorry, I did not understand your input.")

    guess = (high + low) / 2

print("Game over. Your secret number was: " + str(math.floor(guess)))
