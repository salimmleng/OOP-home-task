



# Runtime Polymorphism -> Dynamic Binding | Overriding | Late Binding

# CompileTime Polymorphism-> Static Binding | Overloading | Early Binding




# function overrding in python:


class Animal:
    def speak(self):
        print("Animal makes a sound")

class Dog(Animal):
     # Overriding the speak method from the parent class
    def speak(self):
        print("Dog barks")

class Cat(Animal):
     # Overriding the speak method from the parent class
    def speak(self):
        print("Cat mews")


ani = Animal()
dog = Dog()
cat = Cat()

ani.speak()
dog.speak()
cat.speak()


