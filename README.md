# Console-Based-Zomato-App-Using-DSA-in-CPP
A Console Based Zomato App Using DSA in CPP and Kaggle Dataset for Zomato Restaurants in Bengaluru

# Abstract:
This project is all about helping the customers or users find the best business but, in this case, we have used restaurant data-set, hence the businesses we are going to help with our this
project is in the niche of the food and restaurant. The basic idea of this project is to give the best restaurant or suggest the users the best restaurants according to their preferences. The project also helps in giving them best restaurants according to location, price, area, rating and type of the restaurant

# About the files and Dataset:
**1.Zomato App.cpp:** This file has all the cpp code
**2.Dataset link:** [Zomato Bangalore Restaurants](https://www.kaggle.com/himanshupoddar/zomato-bangalore-restaurants) 
**3.PASSWORDS.txt:** A text file containing decryptred passwords of a all users
**4.DECRYPTED_PASSWORDS.txt:** A text file containing encryptred passwords of all users

# Project obstacles:

1.**Proper reading and writing of Data-set file:** This was the very first obstacle that we encountered and it was the core problem as it affects the overall running and implementation of the project and idea into a working and usable and good to use. The dataset we chose was about different restaurants in the given areas, i.e., Bengaluru. Thoughted set was not that huge, we managed to add other random restaurants also, just to hit the mark of 1GB of data file.

2.**Proper Use of Data Structure:**  This is one of the major obstacles we encountered as it was
all about the important aspects of the project. This part was only concerning about the efficiency of the code. We had to use the best suitable data structures to hold the data correctly otherwise it all would have been a mess without a proper and efficient code.

3.**Proper Structuring of the Code:** When we talk about big projects, it is always worth considering that the project is to be viewed as a product for future expansion or growth. The future of this project to us something very promising hence the problem was that hotwire going to structure the code so that it could be easily understood and be used hotwire without redundancy issues. We overcame this obstacle by proper use of Object
oriented Programming.

# Implementation:

To sum the complete implementation of the project, we could divide it into four steps. Following are giving under:

1.**Login and Sign up:** It all starts with the login page or the console. First, we are giving the users the power to log in or sign up, if they are already registered, then we check our database which is of text file, and check the giving or entered password. The authentication was very important as it deals with all security issues and we wanted to make it secure, hence through proper usage of Hashing and hashing functions, we created encrypt and decrypt functions, that take passwords and encrypt them for storing and we and decrypt them after decryption.

2.**Data Set Reading:** Now comes the best part, the reading of data set. The reading of dataset was not easy as it took a lot edge cases to be seen or even foreseen in coming future. We managed to avoid all the errors by using proper use of data structures. First, we created two functions for reading from the data set, the first one was through filing offered by CPP and the other one was through Official CSV Parser. The good thing about parser was that it helped us in achieving the efficiency the we all need in such projects. After the data was read, we stored them in vectors for further use.

3.**Choosing Data Structure:** After having all the data read from the data set into vectors, we were good to go. Now we were facing the situation, of choosing the best suitable data structure. We chose quite a few data structures. First through Binary search tree, then AVL tree for having more balanced efficiency in the code, stacks for having the recent activities of the users.

4.**Use of Data Structures:** Each data structure was used according to the need, as we know when a user wanted to check the restaurants with best ratings, we just made a BST and inversely printed the in-order to get them the restaurants with best ratings or more votes or more better reviews. The stack also worked quite well to keep the record of the things the users is ordering or doing in the app or project

# MODULES:
1.**Restaurant:** This module was very important as it had all the parameters that we wanted the data set to provide us. The parameters like name, URL, address, location, number of votes, ratings are few of the things that helped us achieve our goal of making this project
successfully.

2.**App itself:** The Zomato app itself was a class or module that helped us organize the things
well and in one particular area through this we could say that we achieved encapsulation alongside data abstraction.

3.**Data Structures:** As obvious as it is, the data structures took some time to be completely suitable for the use, the inserting was modified in BST for better insertion of the data etc.

# FUNCTIONS:
1. Find the Best Restaurant of Your Choice (DINE_OUT) 
2. Find the Best Restaurant of Your Choice (DELIEVERY)
3. Find Top 10 Best Restaurant in Bengaluru
4. Show All Restaurant in Your Area 
5. Search Restaurant by Food You Want to Eat 
7. Show A Restaurant Details
8. Give A Restaurant Reviews
9. View Recent restaurants

# Future:
The future of this project looks quite promising. In near future, we could use the graphs which will make the look and feel of the project more appealing as it would be better and easily converted into something graphically representation. We could also use better data structures for better efficiency, not sure how, but we could build our own data structure that holds multiples trees and graphs alongside for better manipulation of the data set used
