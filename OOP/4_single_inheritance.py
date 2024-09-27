
class A:
    def __init__(self,name) -> None:
        self.name = name

    def display(self):
        print(self.name)


class B(A):
    def __init__(self, name) -> None:
        super().__init__(name)

obj = B("Salim")
obj.display()



# practise

# class C:
#     def __init__(self,age) -> None:
#         self.age = age

#     def display(self):
#         print(self.age)
    
# class D(C):
#     def __init__(self, age) -> None:
#         super().__init__(age)  # super er self.age e 27 set hosse

#     def display(self):
#         super().display()  # age super call hosse
#         print("I am child class and I am also 27")

# obj = D(27)
# obj.display()

    