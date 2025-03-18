#                                 list = [] || tuple = (,) || dictionary = {} || sets = {} || empty set = set()
#-------------------------------------------------------------------------------------------------------------------------------------------------
#                                                                       # slicing

# pie = "kanishkdoshi"
# print(pie)
# print(pie[0:7])
# print(pie[7:12])
# print(pie[3:9])
# print(pie[7])
# print(pie[-5:])

#-------------------------------------------------------------------------------------------------------------------------------------------------
#                                                                #after inputing the string 

# name = input("enter name - ")
# print(f"good afternoon, {name}")

#-------------------------------------------------------------------------------------------------------------------------------------------------
#                                                                        #replace

# letter = '''
# dear <|name|>,
# you are selected
# <|date|>
# '''
# print(letter.replace("<|name|>","kanishk").replace("<|date|>","25 sep 3234"))

#-------------------------------------------------------------------------------------------------------------------------------------------------
# ''' lists are mutable and can store multiple data type
# but arrays can only store one data type thats why they both are diffrent '''
# #                                                            #list example

# friend = ["apple", "kanishk", "orange", 34.4, 55, "kk"]
# print(friend)
# print(friend[1:4])
# print(friend[0])
# friend[0] = "banana"
# print(friend[0])

#-------------------------------------------------------------------------------------------------------------------------------------------------
#                                                                      #list example

# list1 = []

# apple = int(input("enter marks of 1 subject = "))
# banana = int(input("enter marks of 2 subject = "))
# green = int(input("enter marks of 3 subject = "))

# list1.append(apple)
# list1.append(banana)
# list1.append(green)

# list1.sort()
# print(list1)

#-------------------------------------------------------------------------------------------------------------------------------------------------
#                                                                    # tuples are immutable

# kd = (1,) # if 1 element. tuple always ends with ','
# print(type(kd))


#-------------------------------------------------------------------------------------------------------------------------------------------------
#                                                                       #dictionary

# marks = {

#     "kanishk" : 43,
#     "sohan" : 33,
#     "mohan" : 64
# }


# print(marks.keys())
# print(marks.items())
# print(marks.values())

# marks.update({"kanishk" : 333,"rohan" : 99})

# print(marks)

#-------------------------------------------------------------------------------------------------------------------------------------------------
#                                                                # dictionary example

# hin_to_en = {

#     "madad" : "help",
#     "kal" : "tomorrow",
#     "aaj" : "today"
# }

# word = input("enter the word you want to meaning of :")

# print(hin_to_en[word])

#-------------------------------------------------------------------------------------------------------------------------------------------------
#                                                                           # set problem
 
# sets = set()

# s = (input("enter 1 number"))
# sets.add(int(s))

# s = (input("enter 2 number"))
# sets.add(int(s))

# s = (input("enter 3 number"))
# sets.add(int(s))

# print(sets)

#-------------------------------------------------------------------------------------------------------------------------------------------------
#                                                                          #if else example

# a = int(input("your age - "))

# if(a>18):print("you can drive")
# else:print("you cannt drive")

#-------------------------------------------------------------------------------------------------------------------------------------------------
#                                                                         #while loop example 
#---------------------------------------------
# i = 1  
# while (i < 6):  
#     print("kanishk") 
#     i += 1  
#---------------------------------------------
# count = 10  
# while (count > 0): 
#     print(count)  
#     count -= 1  
#---------------------------------------------
# list = [22,"hello", 34.4, 55, "kk"]
# i = 0
# while(i<len(list)):
#     print(list[i])
#     i += 1
#---------------------------------------------
# n = int(input("enter any 1 number - ")) 
# i = 1
# while(i<11):
#     print(f"{n} X {i} = {n*i}")
#     i += 1
#---------------------------------------------
# c = 100
# while(c >= 1):
#     print(c)
#     c -= 1
#---------------------------------------------
# c = 1
# while (c <= 10):
#     print(c*3)
#     c += 1
#---------------------------------------------

#-------------------------------------------------------------------------------------------------------------------------------------------------
#                                                                        #for loop example 
#---------------------------------------------
# for i in range(4):
#     print(i)
#---------------------------------------------
# list = [22, 33, 44, 55, 66]
# for i in list:
#     print(i)
#---------------------------------------------
# tup = (22,"hello", 34.4, 55, "kk")
# for i in tup:
#     print(i)
#---------------------------------------------
# n = int(input("enter any 1 number - "))
# for i in range(1,11):
#     print(f"{n} X {i} = {n*i}")
#---------------------------------------------
# list = ["kanishk", "doshi", "bpple", "orange", "banana"]
# for name in list:
#     if (name.startswith("b")):print(f"hello" ,name)
#---------------------------------------------
# for i in range (100,0,-1):
#     print(i)
#---------------------------------------------
# tup = (111194,5,6,7,9,0,23)
# n = int(input("Enter the number you are looking for: "))

# found = False

# for num in tup:
#     if num == n:
#         found = True
#         break

# if found:
#     print("Found")
# else:
#     print("Not found")
#---------------------------------------------
# list = []
# x = int(input("enter the number till u wanna add elements in list - "))
# print(f"enter {x} number in  list")
# for n in range (x):
#     input(f"enter number {n + 1} - ")
#     list.append(n)
    

# print(list)
#-------------------------------------------------------------------------------------------------------------------------------------------------
# n = int(input("enter value of n - "))
# #                                                                            #recursion
# def fact(n):
#     if(n==0):return 1
#     else:return (n * fact(n - 1))

    
# print(fact(n))

#-------------------------------------------------------------------------------------------------------------------------------------------------
#                                                                              #function
# list = [3,2,1,5,6,7]    

# def l():
#     return (len(list))

# print(l())

#---------------------------------------------

# n = int(input("USD = "))

# def convert(n):
#     return n * 83

# print(f"{n} USD = {convert(n)} INR")

#==========================================================================================================================================================================

# import math #                                                                    #SQUARE ROOT
# a = int(input("enter value of a - "))
# print(f"sqroot of {a} is ",math.sqrt(a))

#==========================================================================================================================================================================

# list = [3, 66, 44, 88, 7, 888]
# max_value = list[0]  
# #                                                                                 #MAX IN LIST
# for i in list:
#     if i > max_value:
#         max_value = i

# print("max =", max_value)

#==========================================================================================================================================================================

# #                                                                          # WRITE ANY THING IN SELECTED FILE 
# f = open("KANISHK.TXT" , "w")
# f.write("kanishk mera naam;\n")

# #                                                                          # APPEND ANY THING IN SELECTED FILE 
# f = open("KANISHK.TXT" , "a") 
# f.write("tera naam kya h?;\n")

# #                                                                            # READ IN SELECTED FILE 
# f = open("KANISHK.TXT" , "r")
# print(f.read())

# f.close()

#==========================================================================================================================================================================

# import os
# #                                                                             #remove any file
# os.remove("sample.txt")

#==========================================================================================================================================================================
# import random

# print('''
# r for rock
# p for paper 
# s for scissors
# ''')
# #                                                                         #ROCK PAPER AND SCISSOR
# computer = random.choice([1,0,-1])
# you = input("your choice = ")

# first = {
#     "r" : 1,
#     "p" : 0,
#     "s" : -1
# }

# your_input_to_dict = first[you]

# third = {
#     "r" : "rock",
#     "p" : "paper",
#     "s" : "scicssor"
# }

# second = {
#     1 : "rock",
#     0 : "paper",
#     -1 : "scissor"
# }

# print(f"you chose {third[you]} \ncomputer chose {second[computer]}")

# if(computer == 1 and your_input_to_dict == 1):
#     print("it's a draw")
# elif(computer == 1 and your_input_to_dict == -1):
#     print("you lost!")
# elif(computer == 1 and your_input_to_dict == 0):
#     print("you win!")
# elif(computer == 0 and your_input_to_dict == 1):
#     print("you lost!")
# elif(computer == 0 and your_input_to_dict == -1):
#     print("you win!")
# elif(computer == 0 and your_input_to_dict == 0):
#     print("it's a draw")
# elif(computer == -1 and your_input_to_dict == 1):
#     print("you won!")
# elif(computer == -1 and your_input_to_dict == -1):
#     print("it's a draw")
# elif(computer == -1 and your_input_to_dict == 0):
#     print("you lost!")
# else:
#     print("error")

#==========================================================================================================================================================================

class kani:
    name = "mohan"
    id = 33
    address = "sitapura"


k = kani()
print("name =",k.name,"\nid =",k.id,"\naddress =",k.address)


