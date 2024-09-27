
class A:
    pass

def display():   # without self is not a method of class A
    print("I am Methods")


obj = A()

obj.value = display  # obj.value holo display function er reference
obj.value()  # function ke call kora holo
print(obj.value)  # reference function er address print hobe
print(obj)  #object print hobe



# obj.display()    #In Python, we can only call methods that belong to a class from an instance of that class. Since display() is defined outside the class, the object obj doesn't know about it.it raise a error



