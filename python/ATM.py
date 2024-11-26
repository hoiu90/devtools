print("Welcome to ATM")
while True:
    num = input("Enter your card number: ")
    if num == "1234":
        print("Access granted")
        break
    else:
        print("Invalid card, please try again")
input("Please insert your pin: ")
print("Please select an option:")
print("1. Balance Enquiry")
print("2. Cash Withdrawal")
print("3. Cash Deposit")
print("4. Exit")
option = input("Enter your option_number: ")
if option == "1":
    print("Your balance is: $1000")
elif option == "2":
    while True: 
        print("Please enter the amount you want to withdraw: ")
        num = int(input("Enter the amount: "))      
        if num > 1000:
            print("You cannot withdraw more than $1000")
            print("Please try again")
        else:
            print("Please take your cash")
            print("Your new balance is: $", 1000 - num)
            break
elif option == "3":
    print("Please enter the amount you want to deposit: ")
    print("1. $100")
    print("2. $500")
    print("3. $1000")
    print("4. customized amount")
    option2 = input("Enter your option_number: ")
    if option2 == "1":
        print("Please take your cash")
        print("Your new balance is: $", 1000 + 100)
    elif option2 == "2":
        print("Please take your cash")
        print("Your new balance is: $", 1000 + 500)
    elif option2 == "3":
        print("Please take your cash")
        print("Your new balance is: $", 1000 + 1000)
    elif option2 == "4":
        print("Please enter the amount you want to deposit: ")
        num = int(input("Enter the amount: "))
        print("Please take your cash")
        print("Your new balance is: $", 1000 + num)
elif option == "4": 
    print("Thank you for using ATM")
else:
    print("Invalid option")