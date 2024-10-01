while True:
    a = int(input("Enter value of a: "))
    b = int(input("Enter value of b: "))

    if a == 0 and b == 0:
        break

    if 1 <= a <= 10 and 1 <= b <= 10:
        if (a == 1 and b == 10) or (b - a == 1):
            print("yes")
        else:
            print("no")
    else:
        print(f"Invalid values for a: {a}, b: {b}")
