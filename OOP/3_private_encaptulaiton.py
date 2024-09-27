class person:
    def __init__(self,name,age) -> None:
        self.__name = name
        self.__age = age   # private attribute

    def __display_info(self):  #private method
        print(self.__name,self.__age)

    # Public method to access private attributes
    def show_info(self):
        self.__display_info()


p = person("salim",28)
# p.__display_info()  will raise attribue error cause private methos can not be accessed outside from the class
p.show_info() # but private method can be  accessed through public method

