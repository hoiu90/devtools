word_list = ["apple", "banana", "orange", "grape", "pear", "pineapple"]
import random
num = random.choice(word_list)
word_length = len(num)
print("Welcome to Hangman Game!")
print("The word has", word_length, "letters.")
num1 ="_"* word_length
print("The word looks like:", num1)
print("You have 6 guesses.")
corut = 0
try_couter = 0
while corut<word_length:
    input_word = input("Enter your guess letter: ")
    if input_word in num:
        print("Good guess!")
        for i,input_word in enumerate(num):
            if num2 == num:
                print("Congratulations, you win!")
                break
        else:
            print("Enter your guess next letter: ")
    else:
        print("Sorry, that letter is not in the word.")
        print("please try again.")
        try_couter += 1
