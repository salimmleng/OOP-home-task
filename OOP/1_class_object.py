
class A:
    value = 5 #class variable
    def __init__(self) -> None:
        print("I am Constructor")
    
    def display(self):
        print("I am method")

    def __del__(self):  
        print("I am destructor")

     # The destructor (__del__) is called when the object is deleted /the destructor will be called automatically when the program finishes.

    def __str__(self) -> str:
        return "I am ClasS A"



obj = A()

obj.display()
del obj  # evabe delete na korle o autometically delete hobe
# obj.value = 5

# print(obj.__dict__)


# print(obj.value)
# print(A.value)






