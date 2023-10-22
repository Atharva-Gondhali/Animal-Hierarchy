# Animal-Hierarchy
CA Project Grp

Problem Statement:
To create a C++ program for an Animal Information System that allows users to choose a particular animal from a given list and learn the basics of it like their diet and the region they are usually found in.

Explanation: 
This is a menu-driven code that allows the user to select any animal and get its details, this program contains the following details:
1.	Name
2.	Place in the Animal Kingdom
3.	Type of Blood
4.	Diet
5.	Places usually found in
This code was written with the help of multilevel inheritance and polymorphism. 
Polymorphism is used in 2 ways:
1.	Array of Animal Pointers:
In your code, you create an array of pointers to Animal objects: Animal* animals[max_animals]. These pointers can point to objects of the base class and any of its derived classes. For example, you can point an Animal* pointer to a Mammal object.

2.	Polymorphic Behavior:
In the main() function, you display a list of animal names and then take user input to choose an animal. When you call animals[choice-1]->put_data();, polymorphism comes into play

3.	Derived Classes:
You have several derived classes that inherit from the Animal class, such as Mammal, Bird, Fish, Reptiles, and Amphibians. These derived classes override the put_data() function. 

Inheritance is used as shown in https://github.com/Atharva-Gondhali/Animal-Hierarchy/blob/main/Animal%20Hierarchy%20Inheritance%20Class%20Diaagram.png
