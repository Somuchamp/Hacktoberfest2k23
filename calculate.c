def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if y != 0:
        return x / y
    else:
        return "Cannot divide by zero"

while True:
    # Take user input for operation
    operation = input("Enter operation (+, -, *, /) or 'exit' to end: ")

    # Check if the user wants to exit
    if operation.lower() == 'exit':
        break

    # Take user input for numbers
    try:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
    except ValueError:
        print("Invalid input. Please enter valid numbers.")
        continue

    # Perform the selected operation
    if operation == '+':
        result = add(num1, num2)
    elif operation == '-':
        result = subtract(num1, num2)
    elif operation == '*':
        result = multiply(num1, num2)
    elif operation == '/':
        result = divide(num1, num2)
    else:
        print("Invalid operation. Please enter +, -, *, or /.")
        continue

    # Display the result
    print("Result: {}".format(result))
