# for i in range (101,201):
#     print(i)

#print a to z char
# for name in range(ord('a'), ord('z') + 1):
#     print(chr(name), end=' ')


#print n of number in descending order
# Prompt the user to enter the number
# n = int(input("Enter the number: "))

# Perform the countdown loop
# for i in range(n, 0, -1):
#     print(i, end=" ")

#print table of n
# for i in range(1,11):
#     print(n*i);

# ex=6=>print power of n;
# Prompt the user to enter the number
# n = int(input("Enter the number: "))

# # Prompt the user to enter the power
# pow = int(input("Enter the power: "))

# # Calculate the power of n
# result = 1
# for i in range(1, pow + 1):
#     result *= n

# # Print the result
# print(result)



#---- ex=7 => sum of n natural number--------
# Prompt the user to enter the number
# n = int(input("Enter the number: "))

# # Calculate the sum of the first n natural numbers
# sum_value = 0
# for i in range(1, n + 1):
#     sum_value += i

# # Print the result
# print(sum_value)

#----------
#ex=8=>factorial number
#=--------
# Prompt the user to enter the number
# n = int(input("Enter the number: "))

# fact = 1
# for i in range(1, n + 1):
#     fact = fact * i

# # Print the result
# print(fact)


#----------
#prime number
#----------
# Prime number check
# n = int(input("Enter the number: "))

# if n < 2:
#     print("Not prime")
# else:
#     for i in range(2, n):
#         if n % i == 0:
#             print("Not prime")
#             break
#     else:
#         print("Prime")



#-------
#Fibonacci series
#-------
# Get user input for the number of terms
n = int(input("Enter the number: "))
print("Fibonacci series up to", n, "terms:", end=" ")

# Initialize variables for the first two terms
first = 0
second = 1

for i in range(1, n + 1):
    print(first, end=" ")

    # Calculate the next term in the Fibonacci series
    next_term = first + second
    first = second
    second = next_term




