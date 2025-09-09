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

# #                                                                     # WRITE ANY THING IN SELECTED FILE 
# f = open("KANISHK.TXT" , "w")
# f.write("kanishk mera naam;\n")

# #                                                                     # APPEND ANY THING IN SELECTED FILE 
# f = open("KANISHK.TXT" , "a") 
# f.write("tera naam kya h?;\n")

# #                                                                       # READ IN SELECTED FILE 
# f = open("KANISHK.TXT" , "r")
# print(f.read())

# f.close()

#==========================================================================================================================================================================

# import os
# #                                                                           #remove any file
# os.remove("sample.txt")

#==========================================================================================================================================================================
# import random

# print('''
# r for rock
# p for paper 
# s for scissors
# ''')
# #                                                                       #ROCK PAPER AND SCISSOR
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

# #                                                                           #OOPS IN PYTOHN
# class kd:    

#     college_name = "jecrc" # CLASS ATTRIBUTE COMMON FOR EVERYONE


#     def __init__(self):  #DEFAULT CONSTRUCTOR
#         pass

#     @staticmethod
#     def show():  
#         print("yoo! Iam DECORATOR")


#     def __init__(self,name,age):  #PARAMETERIZED CONSTRUCTOR
#         self.name = name # <- OBJECT ATTRIBUTE > CLASS ATT.
#         self.age = age


#     def hello(self): #Function
#         print("Hello everyone. I'm a METHOD OR FUNCTION")


#     # TO DELETE A OBJECT OR ATTRIBUTE OF THAT OBJECT USE -> DEL.OBJ / DEL.ATTRIBUTE.
#     # TO MAKE A METHOD OR ATTRIBUTE PRIVATE USE __ (DUBLE UNDERSCORE).








# k = kd("chaggan",33) # K = OBJECT OF KD CLASS
# print(k.name,k.age)



# k2 = kd("maggan",52) # K2 OBJECT 
# print(k2.name,k2.age)

# # k.show()
# # k.hello()

#==========================================================================================================================================================================

# class bank:

#     def __init__(self,bal,acc):
#         self.balance = bal
#         self.acc_name = acc
#         print("account name = ",self.acc_name,"\nbalance = ",self.balance)

#     def debit(self,amount):
#         self.balance -= amount
#         print(amount,"debited")
#         print("total balance is =",self.final())


#     def credit(self,amount):
#         self.balance += amount
#         print(amount,"credied")
#         print("total balance is =",self.final())


#     def final(self):
#         return self.balance
        

# kd = bank(10000,256)
# kd.credit(3000)
# kd.debit(4000)
# kd.credit(400)
# kd.credit(600)
# kd.credit(900)
# kd.debit(9000)

#==========================================================================================================================================================================

# import numpy as np
# l = np.array([[3,4,5],
#              [7,8,9],
#              [2,3,1]])

# #                                                                     #NUMPY

# print("Original Array:\n", l)
# print("\nTranspose:\n", l.T)
# print("\nMinimum Value:", l.min())
# print("\nMaximum Value:", l.max())
# print("\nIndex of Maximum Value (axis=0):\n", l.argmax(axis=0))
# print("\nIndex of Maximum Value (axis=1):\n", l.argmax(axis=1))
# print("\nSorted Indices (axis=0):\n", l.argsort(axis=0))
# print("\nSize of Array:", l.size)
# print("\nShape of Array:", l.shape)
# print("\nData Type of Array Elements:", l.dtype)
# print("\nTotal Bytes Consumed by Array Elements:", l.nbytes)
# print("\nFlattened Array:\n", l.ravel())
# print("\nReshaped Array (1x9):\n", l.reshape(1, 9))
# print("\nDiagonal Elements of Array:\n", l.diagonal())


# x = np.array([[2,2,2],
#              [3,3,3]])

# y = np.array([[3,3],
#              [2,2],
#              [4,4]])

# kd = np.dot(x,y) #dot product first row first column then first row second column and then same process for second row.
# print(kd)


#==========================================================================================================================================================================

# import pandas as pd
# ##                                                                   PANDAS
# data = {
#     "name":["ram","shyam","rohan"],
#     "city":["nagpur","kanpur","jodhpur"],
#     "marks":[40,60,30]
# }

# df = pd.DataFrame(data)

# mf = pd.read_csv('real_names_data.csv')
# mf = pd.read_csv('real_names_data.csv',chunksize=5000) #used to divide large data sets into chucks 
# mf = pd.read_csv('real_names_data.csv',dtype={'Age':float}) #convert to any diffrent datatype
# mf = pd.read_csv('real_names_data.csv', nrows=50) #used to restrict the amount of rows to 50 or whatever
# mf = pd.read_csv('real_names_data.csv', skiprows=[0,1]) #used to skip that perticular ROW
# mf = pd.read_csv('real_names_data.csv' , encoding="latin-1") #if data dont support utf-8 than convert it into latin-1
# mf = pd.read_csv('real_names_data.csv', header=0) #when columns get converted into rows 

# print(df)
# print("\n")
# print(df.head(2))
# print("\n")
# print(df.tail(2))
# print("\n")
# print(df.isnull()) #used to see how many NULL values are there in the dataframe 
# print(mf)
# print("\n")

#==========================================================================================================================================================================

##                                                                   #FETCHING DATA FROM AN API 
# import requests
# import pandas as pd

# url = "https://movie-database-api1.p.rapidapi.com/list_movies.json"

# querystring = {"limit":"20","page":"1","quality":"all","genre":"all","minimum_rating":"0","query_term":"0","sort_by":"date_added","order_by":"desc","with_rt_ratings":"false"}

# headers = {
# 	"x-rapidapi-key": "230effb227msh37096c99e3a2c3bp1140e0jsn7913adcadb99",
# 	"x-rapidapi-host": "movie-database-api1.p.rapidapi.com"
# }

# response = requests.get(url, headers=headers, params=querystring) #rapidapi se movies list to fetch kiya

# data = response.json().get('data', {}).get('movies', []) #to get the specific dict o list 

# df = pd.DataFrame(data)[['id', 'title', 'year', 'rating', 'runtime']] #json file ko DATAFRAME m convert kiya aur kuch specific columns ko liya dataframe m

# # print(df.head())
# # print(df.tail())
# # print(df.shape)
# df.to_csv("movies_rating") #json -> dataframe -> CSV file

#==========================================================================================================================================================================

##                                                                #FETCHING DATA USING WEB SCRAPING

# import pandas as pd
# import cloudscraper
# from bs4 import BeautifulSoup

# # Create a scraper instance (bypasses basic protections)
# scraper = cloudscraper.create_scraper()

# # Send GET request
# web = scraper.get("https://www.ambitionbox.com/list-of-companies?page=1")

# # Parse HTML
# soup = BeautifulSoup(web.text, 'lxml')

# # Print results
# print("Company Names:\n")
# for i in soup.find_all('h2', class_='companyCardWrapper__companyName'):
#     print(i.text.strip())

#==========================================================================================================================================================================

#                                                                             #METPLOTLIB

''' 

Plot Chart : Shows relationships/trends between variables using lines or points (continuous data).
#          : catogorial vs numarical

Bar Chart: Compares categories using separate rectangular bars (discrete data).

Pie Chart: Displays part-to-whole proportion as slices of a circle (percentage share).

Histogram: Shows frequency distribution of continuous data by grouping into bins (no gaps between bars).

scatter plot : Used to study two columns at once (bivariate analysis). 
#            :  numarical vs numarical 
#            :  use case - finding correlation

'''
# import matplotlib.pyplot as plt 

# x = ["sun","mon","tues","wed","thurs","fri","sat"]
# y = [500,100,200,150,140,90,700]

#==========================================================================================================================================================================

# plt.plot(x,y, color='green', linestyle='--', linewidth=3 , marker='o', label='kamayi') #USED FOR LINE PLOTS (CONTINUOUS DATA). BEST FOR TREND, TIME-SERIES, FUNCTIONAL DATA.

# plt.title('WEEKLY MOVIE THEATER SALES')
# plt.xlabel("days->")
# plt.ylabel("sales->")
# plt.legend(loc='upper left', fontsize=12)
# plt.grid(color='black' , linestyle=':')
# # plt.xticks(['sun','sat'],['day1','day7'])
# plt.ylim(0,800)

#==========================================================================================================================================================================

# plt.bar(x,y,color='green', linestyle='--', linewidth=3 , label='kamayi') #USED FOR BAR CHARTS (CATEGORICAL DATA). BEST FOR CATEGORIES, GROUPS, COMPARISONS. 

# plt.title('WEEKLY MOVIE THEATER SALES')
# plt.xlabel("days->")
# plt.ylabel("sales->")
# plt.legend(loc='upper left', fontsize=12)
# plt.grid(color='black' , linestyle=':')
# plt.ylim(0,800)
# plt.show()

#==========================================================================================================================================================================

# regaion = ['north','south','east','west']
# production = [150,200,550,100]

# plt.pie(production,labels=regaion,autopct='%1.1f%%')
# plt.title("TEA PRODUCTION")
# plt.show()

#==========================================================================================================================================================================

# score = [0,4,1,10,25,20,30,40,50,60,70,80,90,44,66,87,35,89,90,47,23,79,23,14,67,90,65,32,76,54,32,87,6,23,56,78,44,56,78,97,65,32,54,24,98,60,70,80,50,70,57,40,5,36,32,20]

# counts,bins,pathes = plt.hist(score, bins='sturges', color='purple', edgecolor='black')
# print("counts=",counts)
# print("bins=",bins)
# plt.title('Students Score Distribution (Optimal Bins)')
# plt.xlabel('Score Range')
# plt.ylabel('Frequency')
# plt.grid(axis='y', linestyle='--', alpha=0.7)
# plt.show()

#==========================================================================================================================================================================

# heights = [150, 160, 170, 180, 190]
# weights = [50, 60, 65, 80, 90]

# plt.scatter(heights, weights, color='blue', marker='o')

# plt.title('Height vs Weight')
# plt.xlabel('Height (cm)')
# plt.ylabel('Weight (kg)')

# plt.show()

#==========================================================================================================================================================================

# #                                                                       # DATA FETCHING TRU API 

# import pandas as pd
# import requests
# import matplotlib.pyplot as plt

# url = "https://imdb-top-100-movies.p.rapidapi.com/"

# headers = {
# 	"x-rapidapi-key": "230effb227msh37096c99e3a2c3bp1140e0jsn7913adcadb99",
# 	"x-rapidapi-host": "imdb-top-100-movies.p.rapidapi.com"
# }

# response = requests.get(url, headers=headers)

# data = response.json()

# df = pd.DataFrame(data)

# df.drop(df.columns[[3,4,6]], axis=1 ,inplace=True)  #used to remmove Column by Index (Not Name):

# df.drop(columns=['imdbid','imdb_link','id'],inplace=True) #used to remmove Column by Name "BOTH HAVE DIFFDIFFERENT SYNTAXES" 

# df.dropna() #Drop rows with NaN

# df.isnull().sum() #Check NaN

# df.fillna('hi') #Fill NaN

# counts,bins,histo = plt.hist(df['year'],bins='sturges',color='purple',edgecolor='black')
# print("counts = ",counts)
# print("bins = ",bins)
# plt.xlabel('year')
# plt.ylabel('most ratings')
# plt.show()

# df.to_csv('movies_rating2')


#==========================================================================================================================================================================
