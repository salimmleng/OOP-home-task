class Animal:
    def __init__(self,name) -> None:
         self.name = name



class Mamal(Animal):
    def __init__(self, name,habitat) -> None:
          super().__init__(name)
          self.habitat = habitat

    
class Dog(Mamal):
    def __init__(self, name, habitat) -> None:
          super().__init__(name, habitat)

    def display(self):
         print(self.name," - ", self.habitat)


dog = Dog("Lalu", 'jungle')

dog.display()


